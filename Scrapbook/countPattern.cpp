#include <iostream>#include <vector>#include <algorithm>int main(){    long n;    std::cin >> n;    std::vector<long> a(n);    for(long i = 0; i < n; ++i){        std::cin >> a.at(i);    }    long A;    std::cin >> A;    const long MOD = 1000000009;    std::vector< std::vector<long> > dp(n + 1, std::vector<long> (A + 1, 0));    dp.at(0).at(0) = 1;    for(int i = 0; i < n; ++i){        for(int j = 0; j <= A; ++j){            (dp.at(i + 1).at(j) += dp.at(i).at(j)) %= MOD;            if(j >= a.at(i)){                (dp.at(i + 1).at(j) += dp.at(i).at(j - a.at(i))) %= MOD;            }        }    }    std::cout << dp.at(n).at(A) << std::endl;    return 0;}