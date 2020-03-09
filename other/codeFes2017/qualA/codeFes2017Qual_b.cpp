#include <iostream>
#include <vector>

using Graph = std::vector<std::vector<int>>;

bool dfs(std::vector<int> ref, Graph &g, int initV, int v, int edges){
    std::cout << v << std::endl;
    ++edges;
    if(edges < 4){
        ref.at(edges - 1) = v;
        for(auto nextV : g.at(v)){
            if(ref.end() != std::find(ref.begin(), ref.end(), nextV)){
                continue;
            }
            return dfs(ref, g, initV, nextV, edges);
        }
    }else{
        auto begin = g.at(v).begin(), end = g.at(v).end();
        if(end != std::find(begin, end, initV)){
//            return false;
        }else{
            std::cout << initV << ", " << v << std::endl;
            g.at(v).push_back(initV);
            g.at(initV).push_back(v);
            return true;
        }
    }

//    return false;
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
        std::vector<int> ref(3, -1);
        int edges = 0;
        if(dfs(ref, g, i, i, edges)){
            ++count;
        }
        std::cout << "------" << std::endl;
    }

    std::cout << count << std::endl;
    return 0;
}
