#include <iostream>
#include <vector>
#include <cmath>

int countBit(int readVal){
    if(0 == readVal){
        return 0;
    }else{
        return readVal % 2 + countBit(readVal / 2);
    }
}

int main(){
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    std::vector<std::vector<int>> x(n), y(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a.at(i);
        for(int j = 0; j < a.at(i); ++j){
            int val1, val2;
            std::cin >> val1 >> val2;
            x.at(i).push_back(val1 - 1);
            y.at(i).push_back(val2);
        }
    }

    int ans = 0;
    for(int bits = 0; bits < (1 << n); ++bits){
        bool flg = true;
        for(int i = 0; i < n; ++i){
            if(((bits >> i) & 1)){
                int j = 0;
                while(flg && j < a.at(i)){
                    flg = !(((bits >> x.at(i).at(j)) & 1) ^ y.at(i).at(j++));
                }
            }
        }
        
        if(flg){
            ans = std::max(ans, countBit(bits));
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
