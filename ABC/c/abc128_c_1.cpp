#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

int main(){
    int n, m;
    std::cin >> n >> m;

    std::vector<int> k(m), p(m);
    std::vector<std::vector<int>> s(m);
    for(int i = 0; i < m; ++i){
        std::cin >> k.at(i);
        for(int j = 0; j < k.at(i); ++j){
            int val;
            std::cin >> val;
            s.at(i).push_back(val - 1);
        }
    }

    for(int i = 0; i < m; ++i){
        std::cin >> p.at(i);
    }

    int ans = 0;
    for(int bits = 0; bits < (1 << n); ++bits){
        int valves = 0;
        for(int i = 0; i < m; ++i){
           int count = 0;
            for(int j = 0; j < k.at(i); ++j){
                if((bits >> s.at(i).at(j)) & 1){
                    ++count;
                }
            }

            if(p.at(i) == count % 2){
                ++valves;
            }
        }

        if(m == valves){
            ++ans;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}