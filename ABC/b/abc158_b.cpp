#include <iostream>

int main(){
    long long n, a, b;
    std::cin >> n >> a >> b;

    long long ans = a * (n / (a + b)), val = n % (a + b);
    if(val <= a){
        ans += val;
    }else{
        ans += a;
    }

    std::cout << ans << std::endl;

    return 0;
}
    
