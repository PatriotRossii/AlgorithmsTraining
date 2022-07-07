#include <iostream>
#include "solution.hpp"

int main() {
    int x, y, z; std::cin >> x >> y >> z;
    std::cout << is_sufficient(x, y, z);
}