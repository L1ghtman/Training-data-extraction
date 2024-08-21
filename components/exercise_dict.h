#ifndef EXERCISE_DICT_H
#define EXERCISE_DICT_H

#include <unordered_map>
#include <string>

class ExerciseDict {
    public:
        ExerciseDict();
        std::string lookup(const std::string& exercise_name) const;

    private:
        std::unordered_map<std::string, std::string> exercise_dict;
};

#endif // EXERCISE_DICT_H