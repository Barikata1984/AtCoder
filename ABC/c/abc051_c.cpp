#include <iostream>

int main(){
    int sx, sy, tx, ty;
    std::cin >> sx >> sy >> tx >> ty;

    int ver = ty - sy, hor = tx - sx;
    std::string ans = "";
    ans += std::string(ver, 'U');
    ans += std::string(hor, 'R');
    ans += std::string(ver, 'D');
    ans += std::string(hor, 'L');
    ans += "L";
    ans += std::string(ver + 1, 'U');
    ans += std::string(hor + 1, 'R');
    ans += "DR";
    ans += std::string(ver + 1, 'D');
    ans += std::string(hor + 1, 'L');
    ans += "U";

    std::cout << ans << std::endl;

    return 0;
}