#include <iostream>
#include <vector>
#include <queue>

int main(){
    int r, c, sy, sx, gy, gx;
    std::cin >> r >> c >> sy >> sx >> gy >> gx;
    --sy; --sx; --gy; --gx;

    std::vector<std::string> map(r);
    for(int i = 0; i < r; ++i){
        std::cin >> map.at(i);
    }

    std::vector<std::vector<int>> dist(r, std::vector<int>(c, -1));
    std::vector<int> dx{1, 0, -1, 0}, dy{0, 1, 0, -1};
    std::queue<int> x, y;

    dist.at(sy).at(sx) = 0;
    x.push(sx); y.push(sy);

    while(!x.empty() && !y.empty()){
        int vx = x.front(), vy = y.front();
        x.pop(); y.pop();
        for(int i = 0; i < 4; ++i){
            int nextX = vx + dx.at(i), nextY = vy + dy.at(i);
            if('.' == map.at(nextY).at(nextX) && -1 == dist.at(nextY).at(nextX)){
                dist.at(nextY).at(nextX) = dist.at(vy).at(vx) + 1;
                x.push(nextX); y.push(nextY);
            }
        }
    }

    std::cout << dist.at(gy).at(gx) << std::endl;

    return 0;
}
