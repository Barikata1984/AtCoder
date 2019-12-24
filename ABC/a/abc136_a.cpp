#include <iostream>
#include <algorithm>

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << std::max(0, c - (a - b)) << std::endl;

    return 0;
}