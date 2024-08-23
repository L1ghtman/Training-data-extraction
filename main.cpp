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
    std::vector<std::string> split_test = split_string(test_string, 'x');
    for (const auto& str : split_test) {
        std::cout << str << std::endl;
    }
}