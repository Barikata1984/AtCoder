#include <iostream>
#include <algorithm>
#include <cmath>

int main(){
    int n;
    std::cin >> n;

    int limit = std::pow(3, n);
    for(int i = 0; i < limit; ++i){
        std::string ans = "";
        int j = i;
    
        while(0 != j){
            ans += 'a' + j % 3;
            j /= 3;
        }
    
        int sz = ans.size();
        if(n != sz){
            ans += std::string(n - sz, 'a');
        }

        std::reverse(ans.begin(), ans.end());

        std::cout << ans << std::endl;
    }

    return 0;
}
