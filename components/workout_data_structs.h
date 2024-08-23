#ifndef WORKOUT_DATA_STRUCTS_H
#define WORKOUT_DATA_STRUCTS_H

#include <string>
#include <vector>
#include "common_types.h"

using cType::RepVal;
using cType::RVVector;
using cType::DoubleVector;

class Set {
    public:
        Set(RepVal reps = 0,
            RVVector drop_reps = RVVector(),
            double weight = 0.0,
            DoubleVector drop_weight = DoubleVector(),
            std::string time = 0);

        static Set withTime(std::string time) {
            return Set(0, RVVector(), 0.0, DoubleVector(), time);
        }

        static Set normal_set(RepVal reps, double weight) {
            return Set(reps, RVVector(), weight, DoubleVector(), 0);
        }

        static Set drop_set(RVVector reps, DoubleVector weight) {
            return Set(0, reps, 0.0, weight, 0);
        }
    
    private:
        RepVal reps;
        RVVector drop_reps;
        double weight;
        DoubleVector drop_weight;
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