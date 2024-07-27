import re
from components.helpers import *
from components.workout_data_structs import *

# regular expression describing a 'dd.mm' date format
date_pattern = r'\d{2}\.\d{2}'

# This list will contain lists of exercises that each represent an entire workout
workout_list_pre = []
# This list contains the same data as 'workout_list_pre' but as Workout objects
workout_list = []

# Open .txt containing workout data
def read_and_clean_workout_data(file_path):
    with open(file_path, 'r') as file:
        data = file.read()

    workouts = data.split('\n\n')

    # clear out single lines of text
    for workout in workouts:
        if '\n' not in workout:
            workouts.remove(workout)
    
    return workouts

# Take the data read from the .txt and convert it to Workout objects
def import_workout_data(workouts):

    # loop over the workouts in string format and split them by exercise
    for workout in workouts:
        exercises = workout.split('\n')
        workout_list_pre.append(exercises)

    # loop over workouts and their exercises, extract the data and create Set, Exercise and Workout objects that are then added to 'workout_list'
    for workout in workout_list_pre:
        date = None
        exercise_list = []
        for exercise in workout:
            name = ''
            sets = []
            cleaned, notes = separate_notes(exercise)
            if re.search(date_pattern, cleaned) != None:
                date = cleaned
                continue
            for string in cleaned.split(' '):
                if not has_digit(string):
                    name += string + ' '
                if has_digit(string):
                    if '(' in string:
                        temp = string.replace('(', '')
                        temp = temp.replace(')', '')
                        temp = temp.split('x')
                        for i in range(int(temp[0])):
                            sets.append(Set(reps=temp[1], weight=temp[2]))
                        continue
                    if '+' in string:
                        sets.append(get_drop_set(string))
                        continue
                    else:
                        sets.append(get_set(string))
            exercise_list.append(Exercise(name=name.strip(), sets=sets, notes=notes))
        workout_list.append(Workout(exercises=exercise_list, date=date))
    return workout_list

