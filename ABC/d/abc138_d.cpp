#include <iostream>
#include <vector>

using Graph = std::vector<std::vector<int>>;

void dfs(std::vector<bool> &seen, std::vector<long long> &scores, Graph &g, int v){
    seen.at(v) = true;
    for(auto nextV : g.at(v)){
        if(seen.at(nextV)){
            scors.at(nextV) += scores.at(v);
            dfs(counts, scores, g, nextV);
        }
    }
}

int main(){
    int n, q;
    std::cin >> n >> q;

    Graph g(n);
    for(int i = 1; i < n; ++i){
        int a, b;
        std::cin >> a >> b;

        g.at(a - 1).push_back(b - 1);
        g.at(b - 1).push_back(a - 1); // for undirected graphs
    }

    std::vector<long long> scores(n, 0);
    for(int i = 0; i < q; ++i){
        int p, x;
        std::cin >> p >> x;
        scores.at(p - 1) = x;
    }

    std::vector<bool> seen(n, false);
    dfs(counts, scores, g, p - 1);

    for(int i = 0; i < n; ++i){
        std::cout << counts.at(i);
        if(n - 1 != i){
            std::cout << " ";
        }else{
            std::cout << std::endl;
        }
    }

    return 0;
}
