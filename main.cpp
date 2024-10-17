#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <tuple>
#include <sqlite3.h>

#include "components/helpers.h"
#include "components/workout_data_structs.h"


int main() {
    
    printf("hello world\n");

    std::string string1 = "Hello world!";
    std::string string2 = "Hello 1 2 3 test test";

    if (has_digit(string1)) {
        printf("Digit found!\n");
    } 
    else {
        printf("No digit found.\n");
    }
    
    if (has_digit(string2)) {
        printf("Digit found!\n");
    } 
    else {
        printf("No digit found.\n");
    }

    std::string test_string = "100x40";
    char delim_c = 'x';
    StringVector split_test = split_string(test_string, delim_c);
    for (const auto& str : split_test) {
        std::cout << str << std::endl;
    }

    std::string test = "This is (a), test(hello) (test)";
    std::string delim = " (";
    for (const auto& str : split(test, delim)) {
        std::cout << str << std::endl;
    }
    std::cout << "Seg fault here?" << std::endl;
    
    std::string set_1_str = "10x30, 10x40, 10x50"; 
    std::string set_2_str = "8x40, 6x50, 4x60";
    Set set_1 = get_set(set_1_str);
    Set set_2 = get_set(set_2_str);
    std::vector<Set> sets = {set_1, set_2};
    Exercise exercise("Bench Press", sets, "hi this is a test");
    std::vector<Exercise> exercises = {exercise};
    Workout w(exercises, "18.09");

    int r_value = insert_workout_to_db(w);
    std::cout << "inser_workout_to_db() returned: " << r_value << std::endl;

}