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
    if(dot == A || dot == B || dot == C) {
        std::cout << 0;
    }
    if((y == 0 && x >= 0 && x <= d) || (x == 0 && y >= 0 && y <= d) || (y == d - x && x >= 0 && x <= d)) {
        std::cout << 0; 
    } else {
        std::array<std::pair<int, double>, 3> distance = {
            std::pair<int, double>{1, std::sqrt((std::pow(x, 2) - std::pow(A.first, 2)) + (std::pow(y, 2) - std::pow(A.second, 2)))},
            std::pair<int, double>{2, std::sqrt((std::pow(x, 2) - std::pow(B.first, 2)) + (std::pow(y, 2) - std::pow(B.second, 2)))},
            std::pair<int, double>{3, std::sqrt((std::pow(x, 2) - std::pow(C.first, 2)) + (std::pow(y, 2) - std::pow(C.second, 2)))},
        };
        std::cout << std::min_element(distance.begin(), distance.end(), [](auto& x, auto& y) {
            return x.second < y.second;
        })->first;
    }
}
