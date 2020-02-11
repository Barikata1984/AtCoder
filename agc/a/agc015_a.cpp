#include <iostream>
#include <algorithm>

int main(){
    long long n, a, b;
    std::cin >> n >> a >> b;

    long long max = a + b * (n - 1), min = a * (n - 1) + b;

    std::cout << std::max(0ll, max - min + 1) << std::endl;

    return 0;
}