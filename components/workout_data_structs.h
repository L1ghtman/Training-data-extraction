#ifndef WORKOUT_DATA_STRUCTS_H
#define WORKOUT_DATA_STRUCTS_H

#include <string>
#include <vector>
#include "common_types.h"

using cType::RepVal;

class Set {
    public:
        Set(RepVal reps = 0,
            RepVal drop_reps = 0,
            double weight = 0.0,
            double drop_weight = 0.0,
            std::string time = 0);

        static Set withTime(std::string time) {
            return Set(0, 0, 0.0, 0.0, time);
        }

        static Set normal_set(RepVal reps, double weight) {
            return Set(reps, 0, weight, 0.0, 0);
        }

        static Set drop_set(RepVal reps, double weight) {
            return Set(0, reps, 0.0, weight, 0);
        }
    
    private:
        RepVal reps;
        RepVal drop_reps;
        double weight;
        double drop_weight;
        std::string time;
};

class Exercise {
    public:
        Exercise(const std::string& name = "",
                const std::vector<Set> sets = std::vector<Set>(),
                const std::string& notes = "");
    
    private:
        std::string name;
        std::vector<Set> sets;
        std::string notes;
};

class Workout {
    public:
        Workout(const std::vector<Exercise> exercises = std::vector<Exercise>(),
                const std::string& date = "",
                const std::string& name = "");

    private:
        std::vector<Exercise> exercises;
        std::string date;
        std::string name;
};

#endif // WORKOUT_DATA_STRUCTS_H