#include <iostream>
#include <algorithm>

const long long INF = 1e9;

long long calc(long long a, long long b, long long c){
    return a * c + b * std::to_string(c).size();
}

int main(){
    long long a, b, x;
    std::cin >> a >> b >> x;

    long long upr = INF, lwr = 0, mdl;
    while(1 < std::abs(upr - lwr)){
        mdl = (upr + lwr) / 2;
        if(calc(a, b, mdl) <= x){
            lwr = mdl;
        }else{
            upr = mdl;
        }
    }

    long long ans = 0, i = 0;
    for(; i < 3; ++i){
        ans = calc(a, b, mdl + 1 - i);
        if(ans <= x){
            break;
        }      
    }

    std::cout << std::max(0ll, mdl + 1 - i) << std::endl;

    return 0;
}