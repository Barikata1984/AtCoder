#include <iostream>
#include <cmath>

int main(){
    float xa, ya, xb, yb, t, v;
    int n;
    std::cin >> xa >> ya >> xb >> yb >> t >> v >> n;

    bool flg = false;
    for(int i = 0; i < n; ++i){
        int x, y;
        std::cin >> x >> y;

        float t1 = std::sqrt(std::pow(xa - x, 2.0) + std::pow(ya - y, 2.0)) / v;
        float t2 = std::sqrt(std::pow(x - xb, 2.0) + std::pow(y - yb, 2.0)) / v;

        if(t1 + t2 <= t){
            flg = flg || true;
        }else{
            flg = flg || false;
        }
    }

    std::string ans = "NO";
    if(flg){
        ans = "YES";
    } 

    std::cout << ans << std::endl;

    return 0;
}