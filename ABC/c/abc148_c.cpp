#include <iostream>
#include <cmath>

int main(){
    long long n;
    std::cin >> n;

    long long ans = 0, val = 10;
    if(0 == n % 2){
        while(val <= n){
            ans += n / val;
            val *= 5;
        }
    }

    std::cout << ans << std::endl;
    
    return 0;
}
