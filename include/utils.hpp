#pragma once

#include <string>
#include <format>

namespace utils {

inline std::string greet(const std::string& name) {
    return std::format("Hello, {}! Welcome to C++20.", name);
}

inline int add(int a, int b) {
    return a + b;
}

} // namespace utils
