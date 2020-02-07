#include <iostream>

bool isPrime(int readVal){
    switch(readVal){
        case 0:
            return false;
        case 1:
            return false;
        case 2:
            return true:
    }

    if(0 == readVal % 2){
        return false;
    }

    for(int i = 3; i * i <= n; ++i){
        if(0 == n % i){
            return false;
        }
    }

    return true;
}

int main(){
    int n;
    std::cin >> n;

    std::string str(n);
    int sz = str.size(), sum = 0;
    for(int i = 0; i < sz; ++i){
        sum += str.at(i) - 48;
    }

    int val = str.at(sz - 1) - 48;



    if(0 != sum % 3 && )

    std::string ans = "Not Prime";




    if(isPrime(n)){
        ans = "Prime";
    }


    if()
}