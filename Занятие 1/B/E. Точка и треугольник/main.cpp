#include <iostream>
#include <utility>
#include <array>
#include <cmath>
#include <algorithm>

int main() {
    int d; std::cin >> d;
    int x, y; std::cin >> x >> y;
    std::pair<int, int> dot{x, y};

    std::pair<int, int> A{0, 0}, B{d, 0}, C{0, d};
    if(x >= 0 && y >= 0 && x + y <= d) {
        std::cout << 0;
    } else {
        std::array<std::pair<int, double>, 3> distance = {
            std::pair<int, double>{1, std::sqrt(std::pow(x - A.first, 2) + std::pow(y - A.second, 2))},
            std::pair<int, double>{2, std::sqrt(std::pow(x - B.first, 2) + std::pow(y - B.second, 2))},
            std::pair<int, double>{3, std::sqrt(std::pow(x - C.first, 2) + std::pow(y - C.second, 2))},
        };
        std::cout << std::min_element(distance.begin(), distance.end(), [](auto& x, auto& y) {
            return x.second < y.second;
        })->first;
    }
}
