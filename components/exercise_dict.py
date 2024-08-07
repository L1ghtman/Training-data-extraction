import pandas as pd
# from components.exercise_dict import *
# from components.helpers import insert_exercise_to_db

# Dictionary containing look up guide for exercise names
Exercise_dict = {
    'Bench Press': 'Barbell Bench Press',
    'Benchpress': 'Barbell Bench Press',
    'Benches press': 'Barbell Bench Press',

    'Dumbbell Bench Press': 'Dumbbell Bench Press',
    'Kurzhantel bench press': 'Dumbbell Bench Press',

    'Dumbbell Incline Bench Press': 'Dumbbell Incline Bench Press',
    'Incline bench press': 'Dumbbell Incline Bench Press',
    'Incline dumbbell bench press': 'Dumbbell Incline Bench Press',

    'Kabelturm butterfly unten': 'Cable Standing Fly Low to High',
    'butterfly kabelturm unten': 'Cable Standing Fly Low to High',
    'kabelzug unten': 'Cable Standing Fly Low to High',
    'Kabelzug butterfly unten': 'Cable Standing Fly Low to High',
    'Cable fly low to high': 'Cable Standing Fly Low to High',

    'Kabelturm butterfly oben': 'Cable Standing Fly High to Low',
    'butterfly kabelturm oben': 'Cable Standing Fly High to Low',
    'kabelzug oben': 'Cable Standing Fly High to Low',
    'Kabelzug butterfly oben': 'Cable Standing Fly High to Low',
    'Butterlfy kabelturm oben': 'Cable Standing Fly High to Low',
    'Cable fly high to low': 'Cable Standing Fly High to Low',

    'Butterfly machine': 'Lever Seated Fly',
    'Butterlfy machine': 'Lever Seated Fly',
    'Butterfly': 'Lever Seated Fly',

    'Leg press': 'Leg Press',

    'Squat': 'Barbell Squat',

    'Split squat': 'Dumbbell Split Squat',

    'Folter maschine': 'Lever Incline Fly',
    'Foltermaschine': 'Lever Incline Fly',

    'Military press': 'Military Press',

    'Dumbbell Overhead Press': 'Dumbbell Shoulder Press',
    'overhead dumbbell press': 'Dumbbell Shoulder Press',
    'Dumbbell overhead press': 'Dumbbell Shoulder Press',
    'Overhead press dumbbell': 'Dumbbell Shoulder Press',
    'Dumbbell shoulder press': 'Dumbbell Shoulder Press',

    'Single arm cable lateral raise': 'Cable One Arm Lateral Raise',
    'Einarmig seitheben': 'Cable One Arm Lateral Raise',

    'Kabelturm seitheben': 'Cable Lateral Raise',
    'Kabel seitheben überkreuzt': 'Cable Lateral Raise',
    'Cable lateral raise': 'Cable Lateral Raise',

    'Machine overhead press': 'Lever Shoulder Press',
    'Overhead press machine': 'Lever Shoulder Press',
    'Overhead press': 'Lever Shoulder Press',
    'Shoulder press machine': 'Lever Shoulder Press',

    'Dumbbell seitheben': 'Dumbbell Lateral Raise',
    'Seitheben': 'Dumbbell Lateral Raise',

    'Skullcrusher': 'Skullcrusher',
    'Skull crusher': 'Skullcrusher',

    'Kabel kickback': 'Cable One Arm Kickback',
    'Kabelturm kickback': 'Cable One Arm Kickback',
    'Kabelzug kick back': 'Cable One Arm Kickback',
    'Kabelturm kickbacks': 'Cable One Arm Kickback',

    'Kabelzug pull down': 'Cable Pushdown',
    'Kabelturm pull down': 'Cable Pushdown',
    'Kabelturm pulldown': 'Cable Pushdown',

    'Kabelturm overhead': 'Cable Bent-over Triceps Extension',

    'Seated incline curls': 'Dumbbell Incline Curl',
    'Bicep incline bench curls': 'Dumbbell Incline Curl',
    'Incline seated curl': 'Dumbbell Incline Curl',
    'Bicep incline bench curl': 'Dumbbell Incline Curl',
    'Incline biceps curl': 'Dumbbell Incline Curl',

    'Preacher curls': 'Preacher Curl',
    'Preacher curl machine': 'Preacher Curl',

    'Single arm preacher curls': 'Dumbbell Preacher Curl',
    'Single arm preacher curl': 'Dumbbell Preacher Curl',

    'Pull ups': 'Pull Up',
    'Klimmzug': 'Pull Up',
    'Pull up': 'Pull Up',

    'Band assisted pull up': 'Band Assisted Pull Up',

    'Pullover': 'Lever Pullover',
    'Pull over machine': 'Lever Pullover',
    'Pullover machine': 'Lever Pullover',
    'Überzugmaschine': 'Lever Pullover',

    'Negative pull up': 'Negative Pull Ups',
    'Negative pull ups': 'Negative Pull Ups',
    'Negativ klimmzug': 'Negative Pull Ups', 
    'negative Pull up': 'Negative Pull Ups',
    'negative pull up': 'Negative Pull Ups',

    'Deadlifts': 'Deadlift',
    'Dead lift': 'Deadlift',
    'Deadlift': 'Deadlift',

    'Lat pull down': 'Cable Pulldown',
    'latzug': 'Cable Pulldown',
    'Lat pulldown': 'Cable Pulldown',

    'Rudern kabelturm breiter griff': 'Cable Wide Grip Seated Row',
    'Cable row wide grip': 'Cable Wide Grip Seated Row',
    'Kabelturm rudern mittelbreit': 'Cable Wide Grip Seated Row',
    'Kabelturm wide row': 'Cable Wide Grip Seated Row',
    'Kabelturm rudern breit': 'Cable Wide Grip Seated Row',

    'Kabelturm rudern': 'Cable Seated Row',
    'rudern aufrecht': 'Cable Seated Row',
    'Ruder kabelturm': 'Cable Seated Row',

    'Reverse butterfly': 'Reverse Fly',
    'Rev butterfly': 'Reverse Fly',

    'hang': 'Hang',

    'Rotator cuff': 'Rotator Cuff',

    'dumbbell bent over row': 'Dumbbell Bent-Over Row',
    'bent over row': 'Dumbbell Bent-Over Row',
    'Bent over dumbbell row': 'Dumbbell Bent-Over Row',

    'Adduction': 'Lever Seated Hip Adduction',
    'Adductor': 'Lever Seated Hip Adduction',
    'Adduktor': 'Lever Seated Hip Adduction',

    'Bench butterfly': 'Dumbbell Fly',

    'Weighted shrug': 'Wheighted Shrug',

    'ß Stange': 'Barbell Curl',
    'ẞ-Stange curls': 'Barbell Curl',
    'ẞ-Stange': 'Barbell Curl',

    'Hammer Curls': 'Hammer Curl',
    'Hammer curl': 'Hammer Curl',

    'bein beuger': 'Leg Curl',
    'beuger': 'Leg Curl',

    'bein strecker': 'Leg Extension',
    'leg extension': 'Leg Extension',
    'Strecker': 'Leg Extension',

    'abduktor maschine': 'Lever Seated Hip Abduction',

    'tbar lat pull': 'Lever Incline Row',

    'Ruder maschine': 'Lever Wide Grip Seated Row',
    'Rudern maschine': 'Lever Wide Grip Seated Row',
    'lat row machine': 'Lever Wide Grip Seated Row',
    'Machine row': 'Lever Wide Grip Seated Row',

    'front lift': 'Barbell Front Raise',
    'Front raise': 'Barbell Front Raise',

    'kurzhantel curl': 'Dumbbell Curl',
    'Dumbbell curl': 'Dumbbell Curl',
    'Curl/hammer curl': 'Dumbbell Curl',
    'Dumbbell curls': 'Dumbbell Curl',

    'Kabelzug curls': 'Cable Curl',
    'Kabelturm curl': 'Cable Curl',
    'Kabelturm curls': 'Cable Curl',

    'Kabelzug overhead': 'Cable Bent-over Triceps Extension',

}
