#include "exercise_dict.h"

ExerciseDict::ExerciseDict() {
    exercise_dict[to_lower("Bench Press")] = "Barbell Bench Press";
    exercise_dict[to_lower("Benchpress")] = "Barbell Bench Press";
    exercise_dict[to_lower("Benches press")] = "Barbell Bench Press";
    exercise_dict[to_lower("Dumbbell Bench Press")] = "Dumbbell Bench Press";
    exercise_dict[to_lower("Kurzhantel bench press")] = "Dumbbell Bench Press";
    exercise_dict[to_lower("Dumbbell Incline Bench Press")] = "Dumbbell Incline Bench Press";
    exercise_dict[to_lower("Incline bench press")] = "Dumbbell Incline Bench Press";
    exercise_dict[to_lower("Incline dumbbell bench press")] = "Dumbbell Incline Bench Press";
    exercise_dict[to_lower("Kabelturm butterfly unten")] = "Cable Standing Fly Low to High";
    exercise_dict[to_lower("butterfly kabelturm unten")] = "Cable Standing Fly Low to High";
    exercise_dict[to_lower("kabelzug unten")] = "Cable Standing Fly Low to High";
    exercise_dict[to_lower("Kabelzug butterfly unten")] = "Cable Standing Fly Low to High";
    exercise_dict[to_lower("Cable fly low to high")] = "Cable Standing Fly Low to High";
    exercise_dict[to_lower("Kabelturm butterfly oben")] = "Cable Standing Fly High to Low";
    exercise_dict[to_lower("butterfly kabelturm oben")] = "Cable Standing Fly High to Low";
    exercise_dict[to_lower("kabelzug oben")] = "Cable Standing Fly High to Low";
    exercise_dict[to_lower("Kabelzug butterfly oben")] = "Cable Standing Fly High to Low";
    exercise_dict[to_lower("Butterlfy kabelturm oben")] = "Cable Standing Fly High to Low";
    exercise_dict[to_lower("Cable fly high to low")] = "Cable Standing Fly High to Low";
    exercise_dict[to_lower("Butterfly machine")] = "Lever Seated Fly";
    exercise_dict[to_lower("Butterlfy machine")] = "Lever Seated Fly";
    exercise_dict[to_lower("Butterfly")] = "Lever Seated Fly";
    exercise_dict[to_lower("Leg press")] = "Leg Press";
    exercise_dict[to_lower("Squat")] = "Barbell Squat";
    exercise_dict[to_lower("Split squat")] = "Dumbbell Split Squat";
    exercise_dict[to_lower("Folter maschine")] = "Lever Incline Fly";
    exercise_dict[to_lower("Foltermaschine")] = "Lever Incline Fly";
    exercise_dict[to_lower("Military press")] = "Military Press";
    exercise_dict[to_lower("Dumbbell Overhead Press")] = "Dumbbell Shoulder Press";
    exercise_dict[to_lower("overhead dumbbell press")] = "Dumbbell Shoulder Press";
    exercise_dict[to_lower("Dumbbell overhead press")] = "Dumbbell Shoulder Press";
    exercise_dict[to_lower("Overhead press dumbbell")] = "Dumbbell Shoulder Press";
    exercise_dict[to_lower("Dumbbell shoulder press")] = "Dumbbell Shoulder Press";
    exercise_dict[to_lower("Single arm cable lateral raise")] = "Cable One Arm Lateral Raise";
    exercise_dict[to_lower("Einarmig seitheben")] = "Cable One Arm Lateral Raise";
    exercise_dict[to_lower("Kabelturm seitheben")] = "Cable Lateral Raise";
    exercise_dict[to_lower("Kabel seitheben überkreuzt")] = "Cable Lateral Raise";
    exercise_dict[to_lower("Overhead press machine")] = "Lever Shoulder Press";
    exercise_dict[to_lower("Overhead press")] = "Lever Shoulder Press";
    exercise_dict[to_lower("Shoulder press machine")] = "Lever Shoulder Press";
    exercise_dict[to_lower("Dumbbell seitheben")] = "Dumbbell Lateral Raise";
    exercise_dict[to_lower("Seitheben")] = "Dumbbell Lateral Raise";
    exercise_dict[to_lower("Skullcrusher")] = "Skullcrusher";
    exercise_dict[to_lower("Skull crusher")] = "Skullcrusher";
    exercise_dict[to_lower("Kabel kickback")] = "Cable One Arm Kickback";
    exercise_dict[to_lower("Kabelturm kickback")] = "Cable One Arm Kickback";
    exercise_dict[to_lower("Kabelzug kick back")] = "Cable One Arm Kickback";
    exercise_dict[to_lower("Kabelturm kickbacks")] = "Cable One Arm Kickback";
    exercise_dict[to_lower("Kabelzug pull down")] = "Cable Pushdown";
    exercise_dict[to_lower("Kabelturm pull down")] = "Cable Pushdown";
    exercise_dict[to_lower("Seated incline curls")] = "Dumbbell Incline Curl";
    exercise_dict[to_lower("Bicep incline bench curls")] = "Dumbbell Incline Curl";
    exercise_dict[to_lower("Incline seated curl")] = "Dumbbell Incline Curl";
    exercise_dict[to_lower("Bicep incline bench curl")] = "Dumbbell Incline Curl";
    exercise_dict[to_lower("Incline biceps curl")] = "Dumbbell Incline Curl";
    exercise_dict[to_lower("Preacher curls")] = "Preacher Curl";
    exercise_dict[to_lower("Preacher curl machine")] = "Preacher Curl";
    exercise_dict[to_lower("Single arm preacher curls")] = "Dumbbell Preacher Curl";
    exercise_dict[to_lower("Single arm preacher curl")] = "Dumbbell Preacher Curl";
    exercise_dict[to_lower("Pull ups")] = "Pull Up";
    exercise_dict[to_lower("Klimmzug")] = "Pull Up";
    exercise_dict[to_lower("Pull up")] = "Pull Up";
    exercise_dict[to_lower("Band assisted pull up")] = "Band Assisted Pull Up";
    exercise_dict[to_lower("Pullover")] = "Lever Pullover";
    exercise_dict[to_lower("Pull over machine")] = "Lever Pullover";
    exercise_dict[to_lower("Pullover machine")] = "Lever Pullover";
    exercise_dict[to_lower("Überzugmaschine")] = "Lever Pullover";
    exercise_dict[to_lower("Negative pull up")] = "Negative Pull Ups";
    exercise_dict[to_lower("Negative pull ups")] = "Negative Pull Ups";
    exercise_dict[to_lower("Negativ klimmzug")] = "Negative Pull Ups"; 
    exercise_dict[to_lower("negative Pull up")] = "Negative Pull Ups";
    exercise_dict[to_lower("negative pull up")] = "Negative Pull Ups";
    exercise_dict[to_lower("Deadlifts")] = "Deadlift";
    exercise_dict[to_lower("Dead lift")] = "Deadlift";
    exercise_dict[to_lower("Deadlift")] = "Deadlift";
    exercise_dict[to_lower("Lat pull down")] = "Cable Pulldown";
    exercise_dict[to_lower("latzug")] = "Cable Pulldown";
    exercise_dict[to_lower("Lat pulldown")] = "Cable Pulldown";
    exercise_dict[to_lower("Rudern kabelturm breiter griff")] = "Cable Wide Grip Seated Row";
    exercise_dict[to_lower("Cable row wide grip")] = "Cable Wide Grip Seated Row";
    exercise_dict[to_lower("Kabelturm rudern mittelbreit")] = "Cable Wide Grip Seated Row";
    exercise_dict[to_lower("Kabelturm wide row")] = "Cable Wide Grip Seated Row";
    exercise_dict[to_lower("Kabelturm rudern breit")] = "Cable Wide Grip Seated Row";
    exercise_dict[to_lower("Kabelturm rudern")] = "Cable Seated Row";
    exercise_dict[to_lower("rudern aufrecht")] = "Cable Seated Row";
    exercise_dict[to_lower("Ruder kabelturm")] = "Cable Seated Row";
    exercise_dict[to_lower("Rev butterfly")] = "Reverse Fly";
    exercise_dict[to_lower("hang")] = "Hang";
    exercise_dict[to_lower("Rotator cuff")] = "Rotator Cuff";
    exercise_dict[to_lower("dumbbell bent over row")] = "Dumbbell Bent-Over Row";
    exercise_dict[to_lower("bent over row")] = "Dumbbell Bent-Over Row";
    exercise_dict[to_lower("Bent over dumbbell row")] = "Dumbbell Bent-Over Row";
    exercise_dict[to_lower("Adduction")] = "Lever Seated Hip Adduction";
    exercise_dict[to_lower("Adductor")] = "Lever Seated Hip Adduction";
    exercise_dict[to_lower("Adduktor")] = "Lever Seated Hip Adduction";
    exercise_dict[to_lower("Bench butterfly")] = "Dumbbell Fly";
    exercise_dict[to_lower("Weighted shrug")] = "Wheighted Shrug";
    exercise_dict[to_lower("ß Stange")] = "Barbell Curl";
    exercise_dict[to_lower("ẞ-Stange curls")] = "Barbell Curl";
    exercise_dict[to_lower("ẞ-Stange")] = "Barbell Curl";
    exercise_dict[to_lower("Hammer Curls")] = "Hammer Curl";
    exercise_dict[to_lower("Hammer curl")] = "Hammer Curl";
    exercise_dict[to_lower("bein beuger")] = "Leg Curl";
    exercise_dict[to_lower("beuger")] = "Leg Curl";
    exercise_dict[to_lower("bein strecker")] = "Leg Extension";
    exercise_dict[to_lower("leg extension")] = "Leg Extension";
    exercise_dict[to_lower("Strecker")] = "Leg Extension";
    exercise_dict[to_lower("abduktor maschine")] = "Lever Seated Hip Abduction";
    exercise_dict[to_lower("tbar lat pull")] = "Lever Incline Row";
    exercise_dict[to_lower("Ruder maschine")] = "Lever Wide Grip Seated Row";
    exercise_dict[to_lower("Rudern maschine")] = "Lever Wide Grip Seated Row";
    exercise_dict[to_lower("lat row machine")] = "Lever Wide Grip Seated Row";
    exercise_dict[to_lower("Machine row")] = "Lever Wide Grip Seated Row";
    exercise_dict[to_lower("front lift")] = "Barbell Front Raise";
    exercise_dict[to_lower("Front raise")] = "Barbell Front Raise";
    exercise_dict[to_lower("kurzhantel curl")] = "Dumbbell Curl";
    exercise_dict[to_lower("Dumbbell curl")] = "Dumbbell Curl";
    exercise_dict[to_lower("Curl/hammer curl")] = "Dumbbell Curl";
    exercise_dict[to_lower("Dumbbell curls")] = "Dumbbell Curl";
    exercise_dict[to_lower("Kabelzug curls")] = "Cable Curl";
    exercise_dict[to_lower("Kabelturm curl")] = "Cable Curl";
    exercise_dict[to_lower("Kabelturm curls")] = "Cable Curl";
    exercise_dict[to_lower("Kabelzug overhead")] = "Cable Bent-over Triceps Extension";
}

ExerciseDict& ExerciseDict::get_instance() {
            static ExerciseDict instance;
            return instance;
        }

void ExerciseDict::set(const std::string& key, const std::string& value) {
    exercise_dict[to_lower(key)] = value;
}

std::string ExerciseDict::get(const std::string& key) const {
    auto it = exercise_dict.find(to_lower(key));
    if (it != exercise_dict.end()) {
        return it->second;
    }
    throw std::out_of_range("Key not found in exercise_dict.");
}

bool ExerciseDict::contains(const std::string& key) const {
    return exercise_dict.find(to_lower(key)) != exercise_dict.end();
} 

void ExerciseDict::remove(const std::string& key) {
    exercise_dict.erase(to_lower(key));
}

void ExerciseDict::clear() {
    exercise_dict.clear();
}

size_t ExerciseDict::size() const {
    return exercise_dict.size();
}

std::string ExerciseDict::lookup(const std::string& exercise_name) const {
    auto it = exercise_dict.find(to_lower(exercise_name));
    if (it != exercise_dict.end()) {
        return it->second;
    } else {
        return "Unknown Exercise";
    }
}