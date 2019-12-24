#include <iostream>

int main(){
    int a1, a2, a3;
    std::cin >> a1 >> a2 >> a3;

    std::string ans = "";
    if(a1 + a2 + a3 < 22){
        ans = "win";
    }else{
        ans = "bust";
    }

    std::cout << ans << std::endl;

    return 0;
}