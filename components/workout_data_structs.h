#ifndef WORKOUT_DATA_STRUCTS_H
#define WORKOUT_DATA_STRUCTS_H

#include <string>
#include <vector>

class Set {
    public:
        Set(int reps = 0,
            int drop_reps = 0,
            double weight = 0.0,
            double drop_weight = 0.0,
            int time = 0);
    
    private:
        int reps;
        int drop_reps;
        double weight;
        double drop_reps;
        int time;
};

class Exercise {
    public:
        Exercise(const std::string& name = "",
                const std::vector<Set>& sets = {},
                const std::string& notes = "");
    
    private:
        std::string name;
        std::vector<Set> sets;
        std::string notes;
};

class Workout {
    public:
        Workout(const std::vector<Exercise>& exercises = {},
                const std::string& date = "",
                const std::string& name = "");

    private:
        std::vector<Exercise> exercises;
        std::string date;
        std::string name;
};

#endif // WORKOUT_DATA_STRUCTS_H