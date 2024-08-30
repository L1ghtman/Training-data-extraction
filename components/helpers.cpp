#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <tuple>
#include <sqlite3.h>
#include <sstream>
#include <variant>

#include "common_types.h"
#include "helpers.h"
#include "workout_data_structs.h"

using cType::StringVector;
using cType::StringVector;
using cType::RVVector;
using cType::DoubleVector;

bool has_digit(const std::string& string) {
    for (const char &ch: string) {
        if (std::isdigit(ch)) {
            return true;
        }
    }
    return false;
}

StringVector split_string(std::string& string, char delimiter) {
    std::stringstream ss(string);
    std::string segment;
    StringVector seglist;

    while (std::getline(ss, segment, delimiter)) {
        seglist.push_back(segment);
    }
    return seglist;
}

StringVector split(std::string& string, std::string& delim) {
    StringVector tokens;
    size_t pos = 0;
    std::string token;
    while ((pos = string.find(delim)) != std::string::npos) {
        token = string.substr(0, pos);
        tokens.push_back(token);
        string.erase(0, pos + delim.length());
    }
    tokens.push_back(string);
    return tokens;
}

bool contains_char(std::string str, char c) {
    if (str.find(c)!=std::string::npos) {
        return true;
    }
    return false;
}

bool contains_str(std::string& str, std::string& delim) {
    if (str.find(delim)!=std::string::npos) {
        return true;
    }
    return false;
}

Set get_set(std::string& string) {
    string.pop_back();
    if (contains_char(string, 's')) {
        return Set::withTime(string);
    }
    
    StringVector set = split_string(string, 'x');
    
    if (set.size() == 1) {
        set.push_back("0");
    }
    
    if (!contains_char(set[0], '.') && !contains_char(set[1], '.')) {
        return Set::normal_set(stoi(set[0]), stoi(set[1]));
    }
    if (!contains_char(set[0], '.') && contains_char(set[1], '.')) {
        return Set::normal_set(stoi(set[0]), std::stof(set[1]));
    }
    if (contains_char(set[0], '.') && !contains_char(set[1], '.')) {
        return Set::normal_set(std::stof(set[0]), stoi(set[1]));
    }
    if (contains_char(set[0], '.') && contains_char(set[1], '.')) {
        return Set::normal_set(std::stof(set[0]), std::stof(set[1]));
    }
}

Set get_drop_set(std::string& string) {
    string.pop_back();
    StringVector sets = split_string(string, '+');
    RVVector reps = RVVector();
    DoubleVector weights = DoubleVector();
    for (auto& s : sets) {
        StringVector set_data = split_string(s, 'x');
        if (contains_char(set_data[0], '.')) {
            reps.push_back(std::stof(set_data[0]));
            weights.push_back(std::stof(set_data[1]));
        }
        else {
            reps.push_back(stoi(set_data[0]));
            weights.push_back(std::stof(set_data[1]));
        }
    }
    return Set::drop_set(reps, weights);
}

std::tuple<std::string, std::string> separate_notes(std::string& string) {
    std::string delim = " (";
    if (contains_str(string, delim)) {
        StringVector set_and_notes = split(string, delim);
        std::string set = set_and_notes[0];
        set_and_notes[1].pop_back();
        std::string notes = set_and_notes[1];
        return std::make_tuple(set, notes);
    }    
    else {
        return std::make_tuple(string, "");
    } 
}

void print_workout(Workout w) {
    std::string date = w.get_date();
    std::cout << "######################################" << std::endl;
    std::cout << "DATE:     " << date << std::endl;
    for (const auto& exercise : w.get_exercises()) {
        std::cout << "-------------------------------" << std::endl;
        bool first = true;
        std::string set_string = "";
        for (const auto& s : exercise.get_sets()) {
            RepVal reps = s.get_reps();
            double weight = s.get_weight();
            if (cType::is_non_zero(reps) && cType::is_non_zero(weight)) {
                if (first) {
                    set_string += cType::to_string(reps) + "x" + cType::to_string(weight);
                    first = false; 
                }
                else {
                    set_string += ", " + cType::to_string(reps) + "x" + cType::to_string(weight);
                }
            }
        }
        std::cout << set_string << std::endl;
    }
    std::cout << "######################################" << std::endl;
}

std::vector<StringVector> readCSV(const std::string& filename) {
    std::vector<StringVector> data;
    std::fstream file(filename);
    std::string line;
    while(std::getline(file, line)) {
        StringVector row;
        std::stringstream ss(line);
        std::string cell;
        while(std::getline(ss, cell, ',')) {
            row.push_back(cell);
        }
        data.push_back(row);
    }
    return data;
}

void writeCSV(const std::string& filename, std::vector<StringVector>& data) {
    std::ofstream file(filename);
    for (const auto& row : data) {
        for (size_t i = 0; i < row.size(); i++) {
            file << row[i];
            if (i < row.size() - 1) file << ",";
        }
        file << "\n";
    }
}

