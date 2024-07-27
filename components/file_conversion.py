import subprocess
import pandas as pd
from exercise_dict import Exercise_dict 

# paths to file locations (needs to be reworked to contain relative paths (incorporate these files into the current project))
workout_fods = "/Users/lucalichterman/Documents/Hobby/Fitness/GymProgressTracker/Gym_tracking.fods"
workout_fods_test = "/Users/lucalichterman/Documents/Hobby/Fitness/GymProgressTracker/Gym_tracking_test/"
exercises_xlsx = "/Users/lucalichterman/Documents/Hobby/Fitness/GymProgressTracker/Gym_tracking_exercises_excel/"
data_xlsx = "/Users/lucalichterman/Documents/Hobby/Fitness/GymProgressTracker/Gym_tracking_data_excel/"
exercises_csv = "/Users/lucalichterman/Documents/Hobby/Fitness/GymProgressTracker/Gym_tracking_exercises.csv"
data_csv = "/Users/lucalichterman/Documents/Hobby/Fitness/GymProgressTracker/Gym_tracking_data.csv"

# convert a file pointed to by 'input' to .xlsx format
def convert_to_xlsx(input, output):
    subprocess.run([
        '/Applications/LibreOffice.app/Contents/MacOS//soffice',
        '--headless',
        '--convert-to',
        'xlsx',
        '--outdir',
        output,
        input
    ])

# convert a file pointed to by 'input' to .ods format
def convert_to_ods(input, output):
    print('converting...')
    subprocess.run([
        '/Applications/LibreOffice.app/Contents/MacOS//soffice',
        '--headless',
        '--convert-to',
        'fods',
        '--outdir',
        output,
        input
    ])
    print('done')
