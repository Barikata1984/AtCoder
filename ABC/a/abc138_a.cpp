#include <iostream>

int main(){
    int a;
    std::string ans;

    std::cin >> a >> ans;

    if(a < 3200){
        ans = "red";
    }

    std::cout << ans << std::endl;

    return 0;
}