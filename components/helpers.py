import csv
import sqlite3
import pandas as pd
from typing import Set
from components.workout_data_structs import *
from components.exercise_dict import Exercise_dict

# Checks a given string for digits. This is used to determine if a token is an exercise name or numeric data
def has_digit(string):
    for char in string:
        if char.isdigit():
            return True
    return False

# Given a string, this function returns a Set object of training set. Depending on the content of the string it will cast the numeric data as integers of floats or a string.
def get_set(string):
    string = string.replace(',', '')
    if 's' in string:
        return Set(time=string)
    set = string.split('x')
    if len(set) == 1:
        set.append('0')
    if '.' not in set[0] and '.' not in set[1]:
        return Set(reps=int(set[0]), weight=int(set[1]))
    if '.' not in set[0] and '.' in set[1]:
        return Set(reps=int(set[0]), weight=float(set[1]))
    if '.' in set[0] and '.' not in set[1]:
        return Set(reps=float(set[0]), weight=int(set[1]))
    if '.' in set[0] and '.' in set[1]:
        return Set(reps=float(set[0]), weight=float(set[1]))

# This function is used to extract the training data from a string with drop-set syntax. Drop sets are added as two lists, one for reps and one for weights.
def get_drop_set(string):
    string = string.replace(',', '')
    sets = string.split('+')
    reps = []
    weights = []
    for set in sets:
        set = set.split('x')
        if '.' in set[1]:
            reps.append(int(set[0]))
            weights.append(float(set[1]))
        else: 
            reps.append(int(set[0]))
            weights.append(int(set[1]))
    return Set(drop_reps=reps, drop_weight=weights)
    
# Given a string, this function extracts the part marked as a note by parentheses
def separate_notes(string):
    if " (" in string:
        split = string.split(" (")
        return [split[0], split[1][:-1]]
    else:
        return [string, '']
    
# Pring a workout with some ascii syntax sugar for better readability during debugging
def print_workout(Workout):
    date = Workout.date
    print('############################')
    print('DATE:    ' + date)
    for exercise in Workout.exercises:
        print('----------------------------')
        first = True
        set_string = ''
        for s in exercise.sets:
            if s.reps != None and s.weight != None:
                if first:
                    set_string += str(s.reps) + 'x' + str(s.weight)
                    first = False
                else:
                    set_string += ', ' + str(s.reps) + 'x' + str(s.weight)
        print(exercise.name + ' ' + set_string)
    print('############################')

# add a new row to a given .csv file
def add_row_to_csv(filename, new_row):
    with open(filename, 'a', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(new_row)

# Take the list of Workout objects and check if the workout data contains names that are not in the exercise dictionary
def check_dict_completeness(workout_list):
    key_list = list(Exercise_dict.keys())
    exercise_name_list = []
    for workout in workout_list:
        for exercise in workout.exercises:
            exercise_name_list.append(exercise.name)

    exercise_name_list_set = list(set(exercise_name_list))

    missing_exercises = []

    for workout in workout_list:
        for exercise in workout.exercises:
            name = exercise.name
            found = False
            for key in key_list:
                if key.lower() == name.lower():
                    found = True
            if not found:
                missing_exercises.append(name)

    missing_exercises_set = list(set(missing_exercises))

    return missing_exercises_set

# Compare the external exercise database with the internal exercise dictionary and return the difference
def comp_extBD_to_exDICT(exercise_csv):
    df = pd.read_csv(exercise_csv)
    exercise_names = df['Exercise']
    official_names = list(set(Exercise_dict.values()))
    missing_exercises = set(official_names) - set(exercise_names)

    return missing_exercises

def insert_workout_to_db(Workout):
    # Create Database access point
    conn = sqlite3.connect('workout_data.db')
    cursor = conn.cursor()

    for ex in Workout.exercises:
        set_num = 1
        for set in ex.sets:
            if set.time is not None:
                cursor.execute('''INSERT INTO workout_data (date, workout, exercise, set_number, weight, repetitions, notes) VALUES (?,?,?,?,?,?,?)''', (Workout.date, Workout.name, ex.name, set_num, set.weight, set.reps, set.time))
            elif set.drop_reps is None:
                cursor.execute('''INSERT INTO workout_data (date, workout, exercise, set_number, weight, repetitions, notes) VALUES (?,?,?,?,?,?,?)''', (Workout.date, Workout.name, ex.name, set_num, set.weight, set.reps, ex.notes))
            else:
                drop_set_num = 1
                for drop_set in set.drop_reps:
                    cursor.execute('''INSERT INTO workout_data (date, workout, exercise, set_number, weight, repetitions, notes) VALUES (?,?,?,?,?,?,?)''', (Workout.date, Workout.name, ex.name, set_num + drop_set_num * 0.1, set.drop_weight, set.drop_reps, ex.notes))
                    drop_set_num += 1
            set_num += 1
    
    conn.commit()
    conn.close()