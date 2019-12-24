#include <iostream>

int main(){
    std::string str, ans;
    std::cin >> str;

    if("Sunny" == str){
        ans = "Cloudy";
    }else if("Cloudy" == str){
        ans = "Rainy";
    }else if("Rainy" == str){
        ans = "Sunny";
    }

    std::cout << ans << std::endl;

    return 0;
}