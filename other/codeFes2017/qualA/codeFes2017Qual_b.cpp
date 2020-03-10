#include <iostream>
#include <vector>

using Graph = std::vector<std::vector<int>>;

void dfs(std::vector<bool> seen, Graph &g, int &count, int initV, int v, int edges){
    ++edges;
    if(edges < 4){
        seen.at(v) = true;
        for(auto nextV : g.at(v)){
            if(seen.at(nextV)){
                continue;
            }

            dfs(seen, g, count, initV, nextV, edges);
        }
    }else{
        auto begin = g.at(v).begin(), end = g.at(v).end();
        if(end == std::find(begin, end, initV)){
            std::cout << initV << ", " << v << std::endl;
            g.at(v).push_back(initV);
            g.at(initV).push_back(v);
            ++count;
        }
    }
}

int main(){
    int n, m;
    std::cin >> n >> m;

    Graph g(n);
    for(int i = 0; i < m; ++i){
        int a, b;
        std::cin >> a >> b;
        g.at(a - 1).push_back(b - 1);
        g.at(b - 1).push_back(a - 1);
    }

    int count = 0;
    for(int i = 0; i < n; ++i){
        std::vector<bool> seen(n, false);
        int edges = 0;
        dfs(seen, g, count, i, i, edges);
    }

    std::cout << count << std::endl;
    return 0;
}
