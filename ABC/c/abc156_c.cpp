#include <iostream>
#include <vector>
#include <cmath>

#define INF std::pow(10, 18) + 7

int main(){
    int n;
    std::cin >> n;

    std::vector<int> x(n);
    for(int i = 0; i < n; ++i){
        std::cin >> x.at(i);
    }

    long long ans = (long long)INF;
    for(int p = 1; p <= 100; ++p){
        long long val = 0;
        for(int i = 0; i < n; ++i){
            val += std::pow(x.at(i) - p, 2);
        }
        ans = std::min(ans, val);
    }

    std::cout << ans << std::endl;

    return 0;
}

