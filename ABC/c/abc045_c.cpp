#include <iostream>
#include <cstdlib>

int main(){
    std::string s;
    std::cin >> s;

    long long n = s.size(), ans = 0;
    for(int bits = 0; bits < (1 << n - 1); ++bits){
        int i = n;
            for(int j = 0; j < n - 1; ++j){
            if(bits & (1 << j)){
                int index = n - 1 - j;
                ans += std::atoll(s.substr(index, i - index).c_str());
                i = index;
            }
        } 
        
        ans += std::atoll(s.substr(0, i).c_str());
    }

    std::cout << ans << std::endl;

    return 0;
}