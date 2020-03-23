#include <iostream>
#include <vector>

int main(){
    int n, m;
    std::cin >> n >> m;

    std::cout << n * (n - 1) / 2 / 1 + m * (m - 1) / 2 / 1 << std::endl;

    return 0;
}