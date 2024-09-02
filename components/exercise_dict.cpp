#include "exercise_dict.h"

ExerciseDict::ExerciseDict() {
   
}

std::string ExerciseDict::lookup(const std::string& exercise_name) const {
    auto it = exercise_dict.find(exercise_name);
    if (it != exercise_dict.end()) {
        return it->second;
    } else {
        return "Unknown Exercise";
    }
}