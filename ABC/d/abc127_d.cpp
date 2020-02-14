#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
#include <map>

int main(){
    long long n, m;
    std::cin >> n >> m;

    std::vector<long long> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a.at(i);
    }
    
    std::sort(a.begin(), a.end());

    std::multimap<long long, long long> mp;
    for(long long i = 0; i < m; ++i){
        long long b, c;
        std::cin >> b >> c;
        mp.insert(std::make_pair(c, b));
    }

    long long i = 0;
    auto ritr = mp.rbegin();
    std::vector<long long> vec;
    while(mp.rend() != ritr && i < n){
        long long val = ritr->first, num = ritr++->second;
        std::vector<long long> buf(num, val);
        vec.insert(vec.end(), buf.begin(), buf.end());
        i += num;
    }

    long long min = std::min(n, i);
    for(long long j = 0; j < min; ++j){
        if(a.at(j) < vec.at(j)){
            a.at(j) = vec.at(j);
        }else{
            break;
        }
    }

    std::cout << std::accumulate(a.begin(), a.end(), 0ll) << std::endl;

    return 0;
}
