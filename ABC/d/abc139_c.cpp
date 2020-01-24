#include <iostream>

int main(){
    long long n;
    std::cin >> n;

    long long ans = n / 2 * (n - 1);
    ans += n % 2 * n / 2;

    std::cout << ans << std::endl;

    return 0;
}