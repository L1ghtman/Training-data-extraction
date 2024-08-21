import re
from components.helpers import *
from components.sqlite_db import *
from components.exercise_dict import *
from components.workout_txt_reader import *
from components.workout_data_structs import *

def main():
    create_database()
    extract_exercises("/Users/lucalichterman/Documents/Hobby/Fitness/GymProgressTracker/Gym_tracking_exercises.csv")
    extracted_workouts = read_and_clean_workout_data('workout.txt')
    imported_workouts = import_workout_data(extracted_workouts)
    for workout in imported_workouts:
        insert_workout_to_db(workout)
    return 0

if __name__ == "__main__":
    main() 