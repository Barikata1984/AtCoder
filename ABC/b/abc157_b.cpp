#include <iostream>
#include <vector>

int main(){
    std::vector<int> vec(9);
    for(int i = 0; i < 9; ++i){
        std::cin >> vec.at(i);
    }

    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i){
        int val;
        std::cin >> val;
        auto itr = std::find(std::begin(vec), std::end(vec), val);
        *itr = -1;
    }

    bool flg = false;
    int i = 0;
    while(!flg && i < 3){
        flg = -1 == vec.at(i) && -1 == vec.at(i + 3) && -1 == vec.at(i + 6);
        ++i;
    }

    i = 0;
    while(!flg && i < 3){ // horizonral
        flg = -1 == vec.at(i * 3 + 0) && -1 == vec.at(i * 3 + 1) && -1 == vec.at(i * 3 + 2);
        ++i;
    }
    
    if(!flg){
        flg = -1 == vec.at(0) && -1 == vec.at(4) && -1 == vec.at(8);
    }

    if(!flg){
        flg = -1 == vec.at(2) && -1 == vec.at(4) && -1 == vec.at(6);
    }

    std::string ans = "No";
    if(flg){
        ans = "Yes";
    }
    std::cout << ans << std::endl;

    return 0;
}
