#ifndef EXERCISE_DICT_H
#define EXERCISE_DICT_H

#include <unordered_map>
#include <string>

class ExerciseDict {
    private:
        std::unordered_map<std::string, std::string> exercise_dict;   
        ExerciseDict() {
            exercise_dict["Bench Press"] = "Barbell Bench Press";
            exercise_dict["Benchpress"] = "Barbell Bench Press";
            exercise_dict["Benches press"] = "Barbell Bench Press";
            exercise_dict["Dumbbell Bench Press"] = "Dumbbell Bench Press";
            exercise_dict["Kurzhantel bench press"] = "Dumbbell Bench Press";
            exercise_dict["Dumbbell Incline Bench Press"] = "Dumbbell Incline Bench Press";
            exercise_dict["Incline bench press"] = "Dumbbell Incline Bench Press";
            exercise_dict["Incline dumbbell bench press"] = "Dumbbell Incline Bench Press";
            exercise_dict["Kabelturm butterfly unten"] = "Cable Standing Fly Low to High";
            exercise_dict["butterfly kabelturm unten"] = "Cable Standing Fly Low to High";
            exercise_dict["kabelzug unten"] = "Cable Standing Fly Low to High";
            exercise_dict["Kabelzug butterfly unten"] = "Cable Standing Fly Low to High";
            exercise_dict["Cable fly low to high"] = "Cable Standing Fly Low to High";
            exercise_dict["Kabelturm butterfly oben"] = "Cable Standing Fly High to Low";
            exercise_dict["butterfly kabelturm oben"] = "Cable Standing Fly High to Low";
            exercise_dict["kabelzug oben"] = "Cable Standing Fly High to Low";
            exercise_dict["Kabelzug butterfly oben"] = "Cable Standing Fly High to Low";
            exercise_dict["Butterlfy kabelturm oben"] = "Cable Standing Fly High to Low";
            exercise_dict["Cable fly high to low"] = "Cable Standing Fly High to Low";
            exercise_dict["Butterfly machine"] = "Lever Seated Fly";
            exercise_dict["Butterlfy machine"] = "Lever Seated Fly";
            exercise_dict["Butterfly"] = "Lever Seated Fly";
            exercise_dict["Leg press"] = "Leg Press";
            exercise_dict["Squat"] = "Barbell Squat";
            exercise_dict["Split squat"] = "Dumbbell Split Squat";
            exercise_dict["Folter maschine"] = "Lever Incline Fly";
            exercise_dict["Foltermaschine"] = "Lever Incline Fly";
            exercise_dict["Military press"] = "Military Press";
            exercise_dict["Dumbbell Overhead Press"] = "Dumbbell Shoulder Press";
            exercise_dict["overhead dumbbell press"] = "Dumbbell Shoulder Press";
            exercise_dict["Dumbbell overhead press"] = "Dumbbell Shoulder Press";
            exercise_dict["Overhead press dumbbell"] = "Dumbbell Shoulder Press";
            exercise_dict["Dumbbell shoulder press"] = "Dumbbell Shoulder Press";
            exercise_dict["Single arm cable lateral raise"] = "Cable One Arm Lateral Raise";
            exercise_dict["Einarmig seitheben"] = "Cable One Arm Lateral Raise";
            exercise_dict["Kabelturm seitheben"] = "Cable Lateral Raise";
            exercise_dict["Kabel seitheben überkreuzt"] = "Cable Lateral Raise";
            exercise_dict["Overhead press machine"] = "Lever Shoulder Press";
            exercise_dict["Overhead press"] = "Lever Shoulder Press";
            exercise_dict["Shoulder press machine"] = "Lever Shoulder Press";
            exercise_dict["Dumbbell seitheben"] = "Dumbbell Lateral Raise";
            exercise_dict["Seitheben"] = "Dumbbell Lateral Raise";
            exercise_dict["Skullcrusher"] = "Skullcrusher";
            exercise_dict["Skull crusher"] = "Skullcrusher";
            exercise_dict["Kabel kickback"] = "Cable One Arm Kickback";
            exercise_dict["Kabelturm kickback"] = "Cable One Arm Kickback";
            exercise_dict["Kabelzug kick back"] = "Cable One Arm Kickback";
            exercise_dict["Kabelturm kickbacks"] = "Cable One Arm Kickback";
            exercise_dict["Kabelzug pull down"] = "Cable Pushdown";
            exercise_dict["Kabelturm pull down"] = "Cable Pushdown";
            exercise_dict["Seated incline curls"] = "Dumbbell Incline Curl";
            exercise_dict["Bicep incline bench curls"] = "Dumbbell Incline Curl";
            exercise_dict["Incline seated curl"] = "Dumbbell Incline Curl";
            exercise_dict["Bicep incline bench curl"] = "Dumbbell Incline Curl";
            exercise_dict["Incline biceps curl"] = "Dumbbell Incline Curl";
            exercise_dict["Preacher curls"] = "Preacher Curl";
            exercise_dict["Preacher curl machine"] = "Preacher Curl";
            exercise_dict["Single arm preacher curls"] = "Dumbbell Preacher Curl";
            exercise_dict["Single arm preacher curl"] = "Dumbbell Preacher Curl";
            exercise_dict["Pull ups"] = "Pull Up";
            exercise_dict["Klimmzug"] = "Pull Up";
            exercise_dict["Pull up"] = "Pull Up";
            exercise_dict["Band assisted pull up"] = "Band Assisted Pull Up";
            exercise_dict["Pullover"] = "Lever Pullover";
            exercise_dict["Pull over machine"] = "Lever Pullover";
            exercise_dict["Pullover machine"] = "Lever Pullover";
            exercise_dict["Überzugmaschine"] = "Lever Pullover";
            exercise_dict["Negative pull up"] = "Negative Pull Ups";
            exercise_dict["Negative pull ups"] = "Negative Pull Ups";
            exercise_dict["Negativ klimmzug"] = "Negative Pull Ups"; 
            exercise_dict["negative Pull up"] = "Negative Pull Ups";
            exercise_dict["negative pull up"] = "Negative Pull Ups";
            exercise_dict["Deadlifts"] = "Deadlift";
            exercise_dict["Dead lift"] = "Deadlift";
            exercise_dict["Deadlift"] = "Deadlift";
            exercise_dict["Lat pull down"] = "Cable Pulldown";
            exercise_dict["latzug"] = "Cable Pulldown";
            exercise_dict["Lat pulldown"] = "Cable Pulldown";
            exercise_dict["Rudern kabelturm breiter griff"] = "Cable Wide Grip Seated Row";
            exercise_dict["Cable row wide grip"] = "Cable Wide Grip Seated Row";
            exercise_dict["Kabelturm rudern mittelbreit"] = "Cable Wide Grip Seated Row";
            exercise_dict["Kabelturm wide row"] = "Cable Wide Grip Seated Row";
            exercise_dict["Kabelturm rudern breit"] = "Cable Wide Grip Seated Row";
            exercise_dict["Kabelturm rudern"] = "Cable Seated Row";
            exercise_dict["rudern aufrecht"] = "Cable Seated Row";
            exercise_dict["Ruder kabelturm"] = "Cable Seated Row";
            exercise_dict["Rev butterfly"] = "Reverse Fly";
            exercise_dict["hang"] = "Hang";
            exercise_dict["Rotator cuff"] = "Rotator Cuff";
            exercise_dict["dumbbell bent over row"] = "Dumbbell Bent-Over Row";
            exercise_dict["bent over row"] = "Dumbbell Bent-Over Row";
            exercise_dict["Bent over dumbbell row"] = "Dumbbell Bent-Over Row";
            exercise_dict["Adduction"] = "Lever Seated Hip Adduction";
            exercise_dict["Adductor"] = "Lever Seated Hip Adduction";
            exercise_dict["Adduktor"] = "Lever Seated Hip Adduction";
            exercise_dict["Bench butterfly"] = "Dumbbell Fly";
            exercise_dict["Weighted shrug"] = "Wheighted Shrug";
            exercise_dict["ß Stange"] = "Barbell Curl";
            exercise_dict["ẞ-Stange curls"] = "Barbell Curl";
            exercise_dict["ẞ-Stange"] = "Barbell Curl";
            exercise_dict["Hammer Curls"] = "Hammer Curl";
            exercise_dict["Hammer curl"] = "Hammer Curl";
            exercise_dict["bein beuger"] = "Leg Curl";
            exercise_dict["beuger"] = "Leg Curl";
            exercise_dict["bein strecker"] = "Leg Extension";
            exercise_dict["leg extension"] = "Leg Extension";
            exercise_dict["Strecker"] = "Leg Extension";
            exercise_dict["abduktor maschine"] = "Lever Seated Hip Abduction";
            exercise_dict["tbar lat pull"] = "Lever Incline Row";
            exercise_dict["Ruder maschine"] = "Lever Wide Grip Seated Row";
            exercise_dict["Rudern maschine"] = "Lever Wide Grip Seated Row";
            exercise_dict["lat row machine"] = "Lever Wide Grip Seated Row";
            exercise_dict["Machine row"] = "Lever Wide Grip Seated Row";
            exercise_dict["front lift"] = "Barbell Front Raise";
            exercise_dict["Front raise"] = "Barbell Front Raise";
            exercise_dict["kurzhantel curl"] = "Dumbbell Curl";
            exercise_dict["Dumbbell curl"] = "Dumbbell Curl";
            exercise_dict["Curl/hammer curl"] = "Dumbbell Curl";
            exercise_dict["Dumbbell curls"] = "Dumbbell Curl";
            exercise_dict["Kabelzug curls"] = "Cable Curl";
            exercise_dict["Kabelturm curl"] = "Cable Curl";
            exercise_dict["Kabelturm curls"] = "Cable Curl";
            exercise_dict["Kabelzug overhead"] = "Cable Bent-over Triceps Extension";
        }    

    public:
        std::string lookup(const std::string& exercise_name) const;

        ExerciseDict(const ExerciseDict&) = delete;
        ExerciseDict& operator=(const ExerciseDict&) = delete;

        static ExerciseDict& get_instance() {
            static ExerciseDict instance;
            return instance;
        }

        void set(const std::string& key, const std::string& value) {
            exercise_dict[key] = value;
        }

        std::string get(const std::string& key) const {
            auto it = exercise_dict.find(key);
            if (it != exercise_dict.end()) {
                return it->second;
            }
            throw std::out_of_range("Key not found in exercise_dict.");
        } 
};

#endif // EXERCISE_DICT_H