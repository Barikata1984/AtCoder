#include <iostream>

int main(){
    int n;
    std::cin >> n;

    float ans = 0.5;

    if(0 != n % 2){
        ans = (n + 1.0) / 2.0 / n;
    }

    std::cout << ans << std::endl;

    return 0;
}