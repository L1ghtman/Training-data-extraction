#include <regex>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

#include "workout_data_structs.h"
#include "common_types.h"
#include "helpers.h"

StringVector read_and_clean_workout_data(std::string path) {
    std::fstream input_file(path);
    StringVector workouts;
    if (input_file.is_open()) {
        std::string line;
        std::string workout_data;
        while (std::getline(input_file, line)) {
            workout_data += line;
        }
        std::string delim = "\n\n"; 
        workouts = split(workout_data, delim);
        auto it = workouts.begin();
        while (it != workouts.end()) {
            if (!contains_str(*it, "\n")) {
                it = workouts.erase(it);
            }
            else {
                it++;
            }
        }
    }
    else {
        std::cerr << "Unable to open file" << std::endl;
    }
    return workouts;
}