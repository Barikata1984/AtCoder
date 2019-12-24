#include <iostream>

int main(){
    std::string str1, str2;

    std::cin >> str1 >> str2;

    int ans = 0;

    for(int i = 0; i < 3; ++i){
        if(str1.at(i) == str2.at(i)){
            ++ans;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}