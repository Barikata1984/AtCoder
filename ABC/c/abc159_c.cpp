#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>

int main(){
    long long l;
    std::cin >> l;
    
    std::cout << std::setprecision(7) << std::fixed << std::pow(l, 3) / 27 << std::endl;

    return 0;
}
