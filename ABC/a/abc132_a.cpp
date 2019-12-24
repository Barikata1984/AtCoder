#include <iostream>
#include <algorithm>
#include <string>

int main(){
    std::string str;
    std::cin >> str;

    std::sort(str.begin(), str.end());

    if(str.at(0) == str.at(1) && str.at(1) != str.at(2) && str.at(2) == str.at(3)){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }

    return 0;
}