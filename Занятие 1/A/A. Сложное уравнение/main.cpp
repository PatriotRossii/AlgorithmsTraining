#include <iostream>

using namespace std;

int main() {
    int a, b, c, d; std::cin >> a >> b >> c >> d;
    if(a == 0 && b == 0) {
        std::cout << "INF";
    } else if(a != 0 && (b * c - a * d) != 0) {
        if(b % a == 0) {
            std::cout << (-b) / a;
        } else {
            std::cout << "NO";
        }
    } else {
        std::cout << "NO";
    }
}