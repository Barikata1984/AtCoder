#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>

int main(){
    //---------------
    // input section
    //---------------
    int n, m;
    std::cin >> n >> m;

    std::vector<std::string> vlvs;
    for(int i = 0; i < m; ++i){
        int k;
        std::cin >> k;
        std::string str(10, '0');
        for(int j = 0; j < k; ++j){
            int val;std::cin >> val;
            ++str.at(10 - val);
        }
        vlvs.push_back(str);
    }

    std::vector<int> p(m);
    for(int i = 0; i < m; ++i){
        std::cin >> p.at(i);
    }

    //--------------------
    // processing section
    //--------------------
    int count = 0;
    for(int i = 0; i < std::pow(2, n); ++i){
        bool flg = true;
        std::bitset<10> numBt(i);
        for(int j = 0; j < m; ++j){
            std::bitset<10> refBt(vlvs.at(j));
            refBt &= numBt;
            if(refBt.count() % 2 != p.at(j)){
                flg = false;
                break;
            }
        }
        
        if(flg){
            ++count;
        }
    }

    std::cout << count << std::endl;

    return 0;
}