#include <algorithm>
#include <iostream>

int main(){
    std::string s;
    std::cin >> s;

    int ans = 0, count = 0;
    for(int i = 0; i < s.size(); ++i){
        char ch = s.at(i);
        if('A' == ch || 'C' == ch || 'G' == ch || 'T' == ch){
            ++count;
        }else{
            ans = std::max(ans, count);
            count = 0;
        }
    }

    ans = std::max(ans, count);
    std::cout << ans << std::endl;

    return 0;
}