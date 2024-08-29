#include <regex>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

#include "workout_data_structs.h"
#include "common_types.h"
#include "helpers.h"

std::regex date_pattern("\d{2}\.\d{2}");

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
            std::string delim = "\n";
            if (!contains_str(*it, delim)) {
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

Exercise get_exercise_from_str(std::string& string, std::string& notes) {
    std::string name = "";
    char delim = ' ';
    StringVector sets_str = split_string(string, delim);
    std::vector<Set> sets = std::vector<Set>();
    for (auto& s : sets_str) {
        if (!has_digit(s)) {
            name += s + ' '; 
        }
        else {
            char c = '(';
            if (contains_char(s, c)) {
                s.erase(std::remove(s.begin(), s.end(), c), s.end());
                std::string delim = "x";
                StringVector multi_set = split(s, delim);
                for (int i = 0; i < stoi(multi_set[0]); i++) {
                    sets.push_back(Set::normal_set(stoi(multi_set[1]), stod(multi_set[2])));
                }
                continue;
            }
            char plus = '+';
            if (contains_char(s, plus)) {
                sets.push_back(get_drop_set(s));
                continue;
            }
            else {
                sets.push_back(get_set(s));
            }
        }
    }
    Exercise exercise(name, sets, notes);
    return exercise;
}

std::vector<Workout> import_workout_data(StringVector workouts) {
    StringVector exercises;
    std::vector<StringVector> pre_processing_workout_list;
    std::vector<Workout> workout_list;
    for (auto& workout : workouts) {
        char delim = '\n';
        exercises = split_string(workout, delim);
        pre_processing_workout_list.push_back(exercises);
    }

    for (auto& workout : pre_processing_workout_list) {
        std::string date = "";
        std::vector<Exercise> exercise_list = std::vector<Exercise>();
        for (auto& exercise : workout) {
            // std::string name = "";
            std::tuple<std::string, std::string> set_and_notes = separate_notes(exercise);
            std::string cleaned = std::get<0>(set_and_notes);
            std::string notes = std::get<1>(set_and_notes);
            if (std::regex_search(cleaned ,date_pattern)) {
                date = cleaned;
                continue;
            }
            Exercise ex = get_exercise_from_str(cleaned, notes);
            exercise_list.push_back(ex);
        }
        Workout wo(exercise_list, date);// TODO: name workouts based on primary muscle group focus (advanced feature)
        workout_list.push_back(wo);
    }
    return workout_list;
}