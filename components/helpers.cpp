#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <tuple>
#include <sqlite3.h>

#include "helpers.h"
#include "workout_data_structs.h"

bool has_digit(const std::string& string) {
    for (const char &ch: string) {
        int ascii_val = (int) ch;
        if (48 <= ascii_val && ascii_val <= 57) {
            return true;
        }
    }
    return false;
}
