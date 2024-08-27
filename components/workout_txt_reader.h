#ifndef WORKOUT_TXT_READER_H
#define WORKOUT_TXT_READER_H

#include <regex>
#include <iostream>
#include <string>

#include "helpers.h"
#include "workout_data_structs.h"
#include "common_types.h"

StringVector read_and_clean_workout_data(std::string path);
std::vector<Workout> import_workout_data(StringVector workouts);

#endif // WORKOUT_TXT_READER_H