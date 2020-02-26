#include <iostream>
#include <utility>
#include <vector>
#include <set>

int main(){
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> starCharts(n);
    for(int i = 0; i < n; ++i){
        int x, y;
        std::cin >> x >> y;
        starCharts.at(i) = std::make_pair(x, y);
    }

    std::vector<std::pair<int, int>> relCoors(n - 1);
    for(int i = 1; i < n; ++i){
        auto interest = starCharts.at(i);
        auto x = interest.first  - starCharts.at(0).first;
        auto y = interest.second - starCharts.at(0).second;
        relCoors.at(i - 1) = std::make_pair(x, y);
    }

    int m;
    std::cin >> m;
    std::set<std::pair<int, int>> stars;
    for(int i = 0; i < m; ++i){
        int x, y;
        std::cin >> x >> y;
        stars.insert(std::make_pair(x, y));
    }

    int xAns = 0, yAns = 0;
    for(auto itr = stars.begin(); stars.end() != itr; ++itr){
        int x = itr->first, y = itr->second;
        bool flg = true;
        for(int j = 0; j < n - 1; ++j){
            auto interest = std::make_pair(x + relCoors.at(j).first, y + relCoors.at(j).second);
            flg = flg && (stars.end() != stars.find(interest));
        }

        if(flg){
            xAns = x - starCharts.at(0).first;
            yAns = y - starCharts.at(0).second;
            break;
        }
    }

    std::cout << xAns << " " << yAns << std::endl;

    return 0;
}