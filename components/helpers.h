#ifndef HELPERS_H
#define HELPERS_H

#include <tuple>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <set>
#include "workout_data_structs.h"

using cType::StringVector;

bool has_digit(const std::string& string);
std::vector<std::string> split_string(std::string& string, char delimiter);
bool contains_char(std::string str, char c);
StringVector split(std::string& str, std::string& delim);
Set get_set(const std::string& string);
Set get_drop_set(const std::string& string);
std::tuple<std::string, std::string> separate_notes(const std::string& string);
void print_workout(Workout);
std::vector<std::string> check_dict_completeness(std::vector<Workout> workout_list);
std::set<std::string> compare_DB_to_Dict();   // TODO: figure out if this is necessary at all
void insert_workout_to_db(Workout);
void insert_exercise_to_db(std::vector<std::string> exercise_info, int i);
void extract_exercises();                     // TODO: figure out if this is necessary at all

#endif // HELPERS_H