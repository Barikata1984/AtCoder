#include <iostream>

int main(){
    int x;
    std::cin >> x;

    long long ans = x / 500 * 1000;
    ans += x % 500 / 5 * 5;

    std::cout << ans << std::endl;

    return 0;
}
