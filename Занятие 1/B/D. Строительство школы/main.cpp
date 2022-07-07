#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    int N; std::cin >> N;
    std::vector<int> locations(N); 

    int alpha = -1;
    for(int& x: locations) {
        std::cin >> x;
        if(x < 1 && alpha == -1) alpha = (1 - x);
        if(alpha != -1) x += alpha;
    }
    if(alpha == -1) alpha = 0;

    int sum = std::accumulate(locations.begin(), locations.end(), 0);
    int currentSum = 0;

    for(auto it = locations.begin(), end = locations.end(); it != end; ++it) {
        currentSum += *it;
        if(currentSum >= (sum - currentSum)) {
            std::cout << *it - alpha;
            break;
        }
    }
}