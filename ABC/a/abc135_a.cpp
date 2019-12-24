#include <iostream>

int main(){
    int a, b;
    std::cin >> a >> b;

    if(1 == (a + b) % 2){
        std::cout << "IMPOSSIBLE" << std::endl;
    }else{
        std::cout << (a + b) / 2 << std::endl;
    }

    return 0;
}