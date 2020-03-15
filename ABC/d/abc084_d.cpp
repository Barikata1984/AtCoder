#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int val){
    switch(val){
        case 1:
            return false;
            break;
        case 2:
            return true;
            break;
    }

    int i = 2;
    while(i <= std::sqrt(val)){
        if(0 == val % i){
            return false;
        }
        ++i;
    }

    return true;
}

int main(){
    int q;
    std::cin >> q;

    std::vector<int> l(q), r(q);
    for(int i = 0; i < q; ++i){
        std::cin >> l.at(i) >> r.at(i);
    }

    std::vector<int> flgs(100001, 0);
    for(int i = 1; i <= 100000; ++i){
        flgs.at(i) = isPrime(i);
    }

    for(int i = 0; i < q; ++i){
        int count = 0;
        for(int j = l.at(i); j <= r.at(i); j += 2){
            if(flgs.at(j) && flgs.at((j + 1) / 2)){
                ++count;
            }
        }
        std::cout << count << std::endl;
    }

    return 0;
}
