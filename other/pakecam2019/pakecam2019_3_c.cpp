#include <iostream>
#include <vector>

int main(){
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> a(n, std::vector<int>(m));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            std::cin >> a.at(i).at(j);
        }
    }

    long long ans = 0;
    for(int i = 0; i < m; ++i){
        for(int j = i + 1; j < m; ++j){
            long long ttl = 0;
            for(int k = 0; k < n; ++k){
                ttl += std::max(a.at(k).at(i), a.at(k).at(j));
            }
            ans = std::max(ans, ttl);
        }
    }

    std::cout << ans << std::endl;

    return 0;
}