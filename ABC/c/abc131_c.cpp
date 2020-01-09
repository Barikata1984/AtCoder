#include <iostream>

long long gcd(long long a, long long b){
    long long denom = std::min(a, b), num = std::max(a, b) % denom, buf;
    while(0 != denom){
        buf = denom;
        denom = num % denom;
        num = buf;
    }

    return buf;
}

long long lcm(long long a, long long b){
    return a * b / gcd(a, b);
}

int main(){
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;
    --a;

    std::cout << b - (b / c + b / d) + b / lcm(c, d) - (a - (a / c + a / d) + a / lcm(c, d)) << std::endl;

    return 0;
}