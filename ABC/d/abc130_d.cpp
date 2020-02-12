#include <iostream>
#include <vector>

int main(){
    long long n, k;
    std::cin >> n >> k;

    long long count = 0;
    std::vector<long long> b(n + 1, 0);
    for(int i = 1; i <= n; ++i){
        long long val;
        std::cin >> val;
        b.at(i) = b.at(i - 1) + val;
    }

    long long ans = 0;
    for(int i = n; 0 <= i; --i){
        if(k <= b.at(i)){
            auto itr = std::upper_bound(b.begin(), b.end(), b.at(i) - k);
            ans += std::distance(b.begin(), itr);
//            std::cout << ans << std::endl;
        }else{
            break;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}