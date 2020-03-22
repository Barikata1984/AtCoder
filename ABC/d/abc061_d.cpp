#include <algorithm>
#include <iostream>
#include <vector>

#define inf 1000000000000000007

using grapharray = std::vector<std::vector<long long>>; // for belman-ford methods

void print(std::vector<long long> vec){
    int n = vec.size();
    for(int i = 0; i < n; ++i){
        std::cout << vec.at(i) << std::endl;
    }
}

void setsew(long long &s, long long &e, long long &w, const grapharray &g, const long long &v){
    s = g.at(v).at(0);
    e = g.at(v).at(1);
    w = g.at(v).at(2);

    return;
}

int main(){
    int n, m;
    std::cin >> n >> m;

    grapharray g;
    long long a, b, c;
    while(std::cin >> a >> b >> c){
        g.push_back(std::vector<long long>{a - 1, b - 1, c});
    }

    std::vector<long long> cost(n, -inf);
    std::vector<bool> isUpdated(n, false);
    cost.at(0) = 0;
    
    bool flg = false;
    long long count = 0, s, e, w;
    while(!flg && count < n){
        for(int i = 0; i < m; ++i){
            setsew(s, e, w, g, i);
            long long buf = std::max(cost.at(e), cost.at(s) + w);
 //           std::cout << cost.at(s) + w << std::endl;
            if(buf != cost.at(e)){
                cost.at(e) = buf;
                isUpdated.at(e) = true;
            }
        }
        
//        print(cost);
//        std::cout << "------" << std::endl;

        auto itr = std::find(std::begin(isUpdated), std::end(isUpdated), true);
        flg = std::end(isUpdated) == itr;
        std::fill(std::begin(isUpdated), std::end(isUpdated), false);
        ++count;
    }
    
    if(1 == n){
        std::cout << 0 << std::endl;
        return 0;
    }

    if(n == count){
        std::cout << "inf" << std::endl;
    }else{
        std::cout << cost.at(n - 1) << std::endl;
    }

    return 0;
}
