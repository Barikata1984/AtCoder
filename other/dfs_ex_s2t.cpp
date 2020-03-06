#include <iostream>
#include <vector>

using Graph = std::vector<std::vector<int>>;

void dfs(std::vector<bool> &seen, Graph &g, int val){
    seen.at(val) = true;

    for(auto nextVal : g.at(val)){
        if(seen.at(nextVal)){
            continue;
        }

        dfs(seen, g, nextVal);
    }
}

int main(){
    int n, m, s, t;
    std::cin >> n >> m >> s >> t;

    Graph g(m);
    for(int i = 0; i < m; ++i){
        int a, b;
        std::cin >> a >> b;

        g.at(a).push_back(b);
        g.at(b).push_back(a); // for undirected graph
    }

    std::vector<bool> seen(n, false);

    dfs(seen, g, s);

    if(seen.at(t)){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }

    return 0;
}