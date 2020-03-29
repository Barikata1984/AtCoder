#include <iostream>
#include <vector>

int main(){
    std::string s;
    std::cin >> s;

    std::string ans = "No";
    if(s.at(2) == s.at(3) && s.at(4) == s.at(5)){
        ans = "Yes";
    }

    std::cout << ans << std::endl;

    return 0;
}
