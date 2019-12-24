#include <iostream>

int main(){
    int a, b;
    std::cin >> a >> b;

    int ans =  -1;

    if(a < 10 && b < 10){
        ans = a * b;
    }

    std::cout << ans << std::endl;

    return 0;
}