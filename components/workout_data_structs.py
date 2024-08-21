
class Workout:
    def __init__(self, exercises=None, date=None, name=None):
        self.exercises = exercises
        self.date = date
        self.name = name

class Exercise:
    def __init__(
            self, 
            name=None, 
            sets=None,
            notes=None
        ):
        self.name = name
        self.sets = sets
        self.notes = notes

class Set:
    def __init__(
            self, 
            reps=None, 
            weight=None, 
            drop_reps=None, 
            drop_weight=None,
            time=None
        ):
        self.reps = reps
        self.weight = weight
        self.drop_reps = drop_reps
        self.drop_weights = drop_weight
        self.time = time


