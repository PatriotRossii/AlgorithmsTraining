#include <iostream>
#include <vector>

int main() {
    int N; std::cin >> N;
    std::vector<int> locations(N); 
    for(int& x: locations) {
        std::cin >> x;
    }
    std::cout << locations[N / 2];
}