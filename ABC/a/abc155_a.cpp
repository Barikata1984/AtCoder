#include <iostream>

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;

    std::string ans = "No";
    if((a == b && a != c)|| (b == c && b != a)|| (c == a && c != b)){
        ans = "Yes";
    }

    std::cout << ans << std::endl;

    return 0;
}
