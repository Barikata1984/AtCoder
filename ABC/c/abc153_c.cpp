#include <iostream>

int main(){
    int h, a, i = 0;
    std::cin >> h >> a;

    while(0 < h){
        h -= a;
        ++i;
    }

    std::cout << i << std::endl;

    return 0;
}