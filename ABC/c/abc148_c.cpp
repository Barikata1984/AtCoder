#include <iostream>
#include <cmath>

int main(){
    long a, b;
    std::cin >> a >> b;

    long count = 1;
    while(0 != a * count % b){
        ++count;
    }

    std::cout << a * count << std::endl;
}