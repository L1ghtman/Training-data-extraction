#ifndef EXERCISE_DICT_H
#define EXERCISE_DICT_H

#include <unordered_map>
#include <string>

class ExerciseDict {
    private:
        std::unordered_map<std::string, std::string> exercise_dict;   
        ExerciseDict(); 

        static std::string to_lower(std::string s) {
            std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return std::tolower(c); });
            return s;
        }
        
    public:
        std::string lookup(const std::string& exercise_name) const;

        // Delete copy constructor and assingment operator to guarantee single instance system wide
        ExerciseDict(const ExerciseDict&) = delete;
        ExerciseDict& operator=(const ExerciseDict&) = delete;

        static ExerciseDict& get_instance();

        void set(const std::string& key, const std::string& value);
         
        std::string get(const std::string& key) const;

        bool contains(const std::string& key) const; 
        
        void remove(const std::string& key);

        void clear(); 

        size_t size() const;
};

#endif // EXERCISE_DICT_H