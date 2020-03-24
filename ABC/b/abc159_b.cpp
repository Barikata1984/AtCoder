#include <iostream>
#include <vector>

int main(){
    std::string s;
    std::cin >> s;

    int n = s.size();
    bool flg = true;
    std::string sRev = s;
    std::reverse(std::begin(sRev), std::end(sRev));
    for(int i = 0; i < n; ++i){
        flg = flg && s.at(i) == sRev.at(i);
    }

    std::string t = s.substr(0, (n - 1) / 2);
    std::string tRev = t;
    std::reverse(std::begin(tRev), std::end(tRev));
    for(int i = 0; i < t.size(); ++i){
        flg = flg && t.at(i) == tRev.at(i);
    }

    auto m = (n + 3) / 2 - 1;
    std::string u = s.substr(m, n - m + 1);
    std::string uRev = u;
    std::reverse(std::begin(uRev), std::end(uRev));
    for(int i = 0; i < u.size(); ++i){
        flg = flg && u.at(i) == uRev.at(i);
    }

    std::string ans = "No";
    if(flg){
        ans = "Yes";
    }

    std::cout << ans << std::endl;

    return 0;
}
