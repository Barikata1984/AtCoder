#include <algorithm>
#include <iostream>

int main(){
    long long a, b, c;
    std::cin >> a >> b >> c;

    long long ans;
    if(0 == a % 2 || 0 == b % 2 || 0 == c % 2){
        ans = 0;
    }else{
        ans = std::min({a * b, b * c, c * a});
    }

    std::cout << ans << std::endl;

    return 0;
}
