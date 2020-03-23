#include <algorithm>
#include <iostream>
#include <vector>

// for the bellman-ford (BF) method
using graphBF = std::vector<std::vector<long long>>;

#define INF (long long)(1e18 + 7) 
#define ALL(x) std::begin(x), std::end(x) 

void print(std::vector<long long> vec){
    int n = vec.size();
    for(int i = 0; i < n; ++i){
        std::cout << vec.at(i) << std::endl;
    }
}

int main(){
    int n, m;
    std::cin >> n >> m;

    graphBF g;
    std::vector<long long> s(m), e(m), w(m);
    for(int i = 0; i < m; ++i){
        std::cin >> s.at(i) >> e.at(i) >> w.at(i);
        --s.at(i); --e.at(i); w.at(i); // since from-1-indexes are given, s and t have to be adjusted by -1
    }

    std::vector<long long> score(n, -INF);
    score.at(0) = 0;
    
    for(int i = 0; i < n - 1; ++i){
        for(int j = 0; j < m; ++j){
            long long buf = std::max(score.at(e.at(j)), score.at(s.at(j)) + w.at(j));
            if(buf != score.at(e.at(j))){
                score.at(e.at(j)) = buf;
            }
        }
        
//        print(score);
//        std::cout << "------" << std::endl;
    }

    // updating a score at a certain vertex at the Nth search secures the existence of a (positive, in this case,) cycle
    // in the following sectcion, it is going to be examined whether the update, if exists, will affect the score at score.at(n - 1)
    std::vector<bool> isUpdated(n, false);
    for(int j = 0; j < m; ++j){
        // if s.at(j) has been updated, e.at(j) also to be
        if(isUpdated.at(s.at(j))){
            isUpdated.at(e.at(j)) = true;
        // verify whether score.at(e.at(j)) will be updated, which means there is a cycle
        }else{
            long long buf = std::max(score.at(e.at(j)), score.at(s.at(j)) + w.at(j));
            if(buf != score.at(e.at(j))){
                isUpdated.at(e.at(j)) = true;
            }
        }
    }

    if(isUpdated.at(n - 1)){
        std::cout << "inf" << std::endl; // the Nth vertex was affected by the cycle
    }else{
        std::cout << score.at(n - 1) << std::endl;
    }

    return 0;
}
