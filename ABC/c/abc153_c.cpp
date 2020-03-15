#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main(){
    int n, k;
    std::cin >> n >> k;

    std::vector<int> h(n);
    for(int i = 0; i < n; ++i){
        std::cin >> h.at(i);
    }

    std::sort(std::begin(h), std::end(h), std::greater<int>());
    int min = std::min(n, k);
    std::cout << std::accumulate(std::begin(h) + min, std::end(h), 0ll) << std::endl;

    return 0;
}
