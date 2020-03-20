#include <algorithm>
#include <iostream>
#include <vector>

int main(){
    std::string hi = "hi", s;
    std::cin >> s;

    int n = s.size();
    bool flg = false;
    if(0 == n % 2 && n / 2 == std::count(std::begin(s), std::end(s), hi)){
        flg = true;
    }

    std::string ans = "No";
    if(flg){
        ans = "Yes";
    }

    std::cout << ans << std::endl;

    return 0;
}
