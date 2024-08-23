#include "workout_data_structs.h"
#include "common_types.h"

using cType::RepVal;
using cType::RVVector;
using cType::DoubleVector;

Set::Set(RepVal reps, 
        RVVector drop_reps, 
        double weight, 
        DoubleVector drop_weight, 
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