#include "workout_data_structs.h"
#include "common_types.h"

using cType::RepVal;

Set::Set(
    RepVal reps, 
    RepVal drop_reps,
    double weight, 
    double drop_weight,
    std::string time):
        reps(reps),
        drop_reps(drop_reps),
        weight(weight),
        drop_weight(drop_weight),
        time(time) {} 

// Exercise::Exercise(
//     std::string name,
//     std::vector<Set> sets,
//     std::string notes):
//     name(name),
//     sets(sets),
//     notes(notes) {}