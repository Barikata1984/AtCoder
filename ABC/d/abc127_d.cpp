#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
#include <map>

int main(){
    int n, m;
    std::cin >> n >> m;

    std::vector<long long> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a.at(i);
    }
    
    std::sort(a.begin(), a.end());

    std::multimap<long long, long long> mp;
    for(int i = 0; i < m; ++i){
        long long b, c;
        std::cin >> b >> c;
        mp.insert(std::make_pair(c, b));
    }

    long long i = 0;
    auto ritr = mp.rbegin();
    std::vector<long long> vec;
    while(0 < n - i){
        long long val = ritr->second;
        if(val <= 0){
            break;
        }else if(n - i < val){
            val -= n - i;
        }
        std::vector<long long> buf(val, ritr->first);
        vec.insert(vec.end(), buf.begin(), buf.end());
        i += val;
        ++ritr;
    }

    for(int j = 0; j < n; ++j){
        if(a.at(j) < vec.at(j)){
            a.at(j) = vec.at(j);
        }else{
            break;
        }
    }

    std::cout << std::accumulate(a.begin(), a.end(), 0ll) << std::endl;

    return 0;
}
