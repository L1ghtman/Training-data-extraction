#ifndef COMMON_TYPES_H
#define COMMON_TYPES_H

#include <vector>
#include <string>

namespace cType {
    using StringVector = std::vector<std::string>;
    using IntVector = std::vector<int>;
    using DoubleVector = std::vector<double>;

    using RepVal = std::variant<int, double>;
    using RVVector = std::vector<RepVal>;
}

#endif // COMMON_TYPES_H