#ifndef COMMON_TYPES_H
#define COMMON_TYPES_H

#include <vector>
#include <string>
#include <sstream>

namespace cType {
    using StringVector = std::vector<std::string>;
    using IntVector = std::vector<int>;
    using DoubleVector = std::vector<double>;

    using RepVal = std::variant<int, double>;
    using RVVector = std::vector<RepVal>;

    inline bool is_non_zero(const RepVal& rv) {
        return std::visit([](auto&& arg) { return arg != 0; }, rv);
    }

    inline int to_int(const RepVal& rv) {
        return std::visit([](auto&& arg) ->  int { return static_cast<int>(arg); }, rv);
    }

    inline double to_double(const RepVal& rv) {
        return std::visit([](auto&& arg) -> double { return static_cast<double>(arg); }, rv);
    }

    inline std::string to_string(const RepVal& rv) {
        return std::visit([](auto&& arg) ->  std::string {
            std::ostringstream oss;
            oss << arg;
            return oss.str();
        }, rv);
    }
}

#endif // COMMON_TYPES_H