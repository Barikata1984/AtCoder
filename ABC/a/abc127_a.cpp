#include <iostream>

int main(){
    int a, b;
    std::cin >> a >> b;

    int ans = 0;
    if(5 < a && a < 13){
        ans = b / 2;
    }else if(13 <= a){
        ans = b;
    }

    std::cout << ans << std::endl;

    return 0;
}