import sqlite3

def create_database():
    conn = sqlite3.connect('workout_data.db')
    cursor = conn.cursor()

    cursor.execute('''CREATE TABLE IF NOT EXISTS exercise_data (
                exercise_id INTEGER PRIMARY KEY,
                exercise TEXT,
                target TEXT,
                synergists TEXT,
                stabilizers TEXT,
                antagonist_stabilizers TEXT,
                dynamic_stabilizers TEXT
                )''')

    cursor.execute('''CREATE TABLE IF NOT EXISTS workout_data (
                date TEXT,
                workout TEXT,
                exercise TEXT,
                set_number INTEGER,
                weight REAL,
                repetitions REAL,
                notes TEXT
                )''')

    conn.commit()
    conn.close()