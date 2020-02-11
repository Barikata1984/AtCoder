#include <iostream>

long long gcd(long long a, long long b){
    if(0 == a % b){
        return b;
    }else{
        return gcd(b, a % b);
    }
}

int main(){
    long long a, b;
    std::cin >> a >> b;

    long long limit = gcd(a, b), val = limit, i = 2, count = 1;
    while(i * i < limit){
        if(0 == val % i){
            while(0 == val % i){
                val /= i;
            }
            ++count;
        }else{
            ++i;
        }
    }

    if(1 < val){
        ++count;
    }

    std::cout << count << std::endl;

    return 0;
}
