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

    RepVal get_reps() const { return reps; }
    RVVector get_drop_reps() const { return drop_reps; }
    double get_weight() const { return weight; }
    DoubleVector get_drop_weight() const { return drop_weight; }
    std::string get_time() const { return time; }
    

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

        std::string get_name() const { return name; }
        std::vector<Set> get_sets() const { return sets; }
        std::string get_notes() const { return notes; }
    
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
        
        std::vector<Exercise> get_exercises() const { return exercises; }
        std::string get_date() const { return date; }
        std::string get_name() const { return name; }

    private:
        std::vector<Exercise> exercises;
        std::string date;
        std::string name;
};

#endif // WORKOUT_DATA_STRUCTS_H