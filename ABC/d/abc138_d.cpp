#include <iostream>
#include <vector>

using Graph = std::vector<std::vector<int>>;

void dfs(std::vector<int> &count, std::vector<int> &score, Graph &g, int v, int p){
    score.at(v) += count.at(v);
    for(auto nextV : g.at(v)){
        if(p != nextV){
            score.at(nextV) += score.at(v);
            dfs(count, score, g, nextV, v);
        }
    }
}

int main(){
    int n, q;
    std::cin >> n >> q;

    Graph g(n);
    for(int i = 0; i < n - 1; ++i){
        int a, b;
        std::cin >> a >> b;
        --a; --b;
        g.at(a).push_back(b);
        g.at(b).push_back(a);
    }

    std::vector<int> count(n);
    for(int i = 0; i < q; ++i){
        int index, val;
        std::cin >> index >> val;
        count.at(index - 1) += val;
    }

    std::vector<int> score(n, 0);
    dfs(count, score, g, 0, -1);

    for(int i = 0; i < n; ++i){
        std::cout << score.at(i);
        if(n - 1 != i){
            std::cout << " ";
        }
    }

    std::cout << std::endl;

    return 0;    
}