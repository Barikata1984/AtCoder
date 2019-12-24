#include <iostream>

int main(){
    std::string str;
    std::cin >> str;

    std::string ans = "Good";
    for(int i = 0; i < 3; ++i){
        if(str.at(i) == str.at(i + 1)){
            ans = "Bad";
            break;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}