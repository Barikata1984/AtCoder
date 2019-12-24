#include <iostream>
#include <algorithm>

int main(){
    int a, b;
    std::cin >> a >> b;

    int ans = std::max(0, a - b * 2);

    std::cout << ans << std::endl;

    return 0;
}