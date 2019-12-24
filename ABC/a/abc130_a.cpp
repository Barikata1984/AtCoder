#include <iostream>

int main(){
    int x, a;
    std::cin >> x >> a;

    int ans = 10;
    if(x < a){
        ans = 0;
    }

    std::cout << ans << std::endl;

    return 0;
}