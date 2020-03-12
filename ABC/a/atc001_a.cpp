#include <iostream>
#include <vector>

std::vector<int> dx{1, 0, -1, 0}, dy{0, 1, 0, -1};

void dfs(std::vector<std::vector<bool>> &seen, std::vector<std::string> &grid, int x, int y){
    seen.at(y).at(x) = true;
    for(int i = 0; i < 4; ++i){
        auto nextX = x + dx.at(i), nextY = y + dy.at(i);
        if(seen.at(nextY).at(nextX) || '#' == grid.at(nextY).at(nextX)){
            continue;
        }

        dfs(seen, grid, nextX, nextY);
    }
}

int main(){
    int h, w;
    std::cin >> h >> w;

    std::vector<std::string> grid(h + 2, std::string(w + 2, '#'));
    int sx, sy, gx, gy;
    for(int j = 1; j <= h; ++j){
        std::string str;
        std::cin >> str;
        for(int i = 1; i <= w; ++i){
            grid.at(j).at(i) = str.at(i - 1);

            if('s' == grid.at(j).at(i)){
                sx = i, sy = j;
            }else if('g' == grid.at(j).at(i)){
                gx = i, gy = j;
            }
        }
    }

    std::vector<std::vector<bool>> seen(h + 2, std::vector<bool>(w + 2, false));
    dfs(seen, grid, sx, sy);

    if(seen.at(gy).at(gx)){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }

    return 0;
}