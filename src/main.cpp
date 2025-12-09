#include <iostream>
#include "utils.hpp"

int main() {
    std::cout << utils::greet("World") << std::endl;
    std::cout << "2 + 3 = " << utils::add(2, 3) << std::endl;
    return 0;
}
