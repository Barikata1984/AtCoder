#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int x){
    if(2 == x){
        return true;
    }

    int i = 2;
    while(i < std::sqrt(x)){
        if(0 == x % i++){
            return false;
        }
    }

    return true;
}

int main(){
    int x;
    std::cin >> x;

    bool flg = false;
    while(!flg){
        if(isPrime(x)){
            flg = true;
        }else{
            ++x;
        }
    }

    std::cout << x << std::endl;

    return 0;
}
