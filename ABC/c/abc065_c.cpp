#include <iostream>

const long long INF = 1e9 + 7;
int main(){
    long long n, m;
    std::cin >> n >> m;

    long long nFact = 1, i = nFact;
    while(i <= n){
        nFact *= i++;
        nFact %= INF;
    }

    long long mFact = 1, j = mFact;
    while(j <= m){
        mFact *= j++;
        mFact %= INF;
    }

    long long ans = 0;
    switch(std::abs(n - m)){
        case 0:
            ans = nFact * mFact * 2 % INF;
            break;
        case 1:
            ans = nFact * mFact % INF;
            break;
    }

    std::cout << ans << std::endl;

    return 0;
}