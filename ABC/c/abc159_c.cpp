#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>

int main(){
    long long l;
    std::cin >> l;
    
    l *= 1e3;

    long long ans = 0;
    for(long long a = 0; a < std::sqrt(l); ++a){
        for(long long b = 0; b < std::sqrt(l) - a; ++b){
            ans = std::max(ans, a * b * (l - a - b));
        }
    }

    std::cout << std::setprecision(7) << std::fixed << ans / 1e9 << std::endl;

    return 0;
}
