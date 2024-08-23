#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <tuple>
#include <sqlite3.h>
#include <sstream>

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

bool contains_char(std::string str, char c) {
    if (str.find(c)!=std::string::npos) {
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