#include <iostream>
#include <algorithm>

int main() {
    int N, i, j; std::cin >> N >> i >> j;
    if(i > j) std::swap(i, j);
    std::cout << std::min(j - i - 1, N + i - j - 1);
}