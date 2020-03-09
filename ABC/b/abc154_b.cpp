#include <iostream>

int main(){
    std::string s;
    std::cin >> s;

    std::string ans(s.size(), 'x');
    std::cout << ans << std::endl;

    return 0;
}
