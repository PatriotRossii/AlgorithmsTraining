#include <iostream>

int main() {
    int r, i, c; std::cin >> r >> i >> c;
    int result;

    if(i == 0) {
        if(r != 0) result = 3;
        else result = c;
    } else if(i == 1) {
        result = c;
    } else if(i == 4) {
        if(r != 0) result = 3;
        else result = 4;
    } else if(i == 6) {
        result = 0;
    } else if(i == 7) {
        result = 1;
    } else {
        result = i;
    }

    std::cout << result;
}