#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#include <cmath>

#define AREA 5001

int main(){
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> pillars(n);
    std::vector<std::vector<bool>> grid(AREA, std::vector<bool>(AREA, false));
    for(int i = 0; i < n; ++i){
        int x, y;
        std::cin >> x >> y;
        grid.at(x).at(y) = true;

        pillars.at(i) = std::make_pair(x, y);
    }

    int ans = 0;
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            if(i == j){
                continue;
            }
            
            int xVari = pillars.at(j).first - pillars.at(i).first;
            int yVari = pillars.at(j).second - pillars.at(i).second;

            int kx = pillars.at(j).first - yVari, ky = pillars.at(j).second + xVari;
            int lx = kx - xVari, ly = ky - yVari;

            bool flg1 =  0 <= kx    &&  0 <= ky   &&  0 <= lx   &&  0 <= ly;
            bool flg2 = kx <= 5000 && ky <= 5000 && lx <= 5000 && ly <= 5000;
            if(flg1 && flg2 && grid.at(kx).at(ky) && grid.at(lx).at(ly)){
                int xAbs = std::abs(xVari), yAbs = std::abs(yVari);
                int area = std::pow(xAbs + yAbs, 2) - 2 * xAbs * yAbs;
                ans = std::max(ans, area);
            }
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
