#include <iostream>
#include <vector>
#include <utility>
#include <typeinfo>

using Graph = std::vector<std::vector<std::pair<int, int>>>;

void print(std::vector<int> vec){
    int n = vec.size();
    for(int i = 0; i < n; ++i){
        std::cout << vec.at(i) << std::endl;
    }
}

void dfs(std::vector<int> &color, Graph &g, int v){
    for(auto nextE : g.at(v)){
        int nextV = nextE.first;
        if(-1 == color.at(nextV)){
            if(0 == nextE.second % 2){
                color.at(nextV) = color.at(v);
            }else{
                color.at(nextV) = 1 - color.at(v);
            }
        }else{
            continue;
        }

        dfs(color, g, nextV);
    }
}

int main(){
    int n;
    std::cin >> n;

    Graph g(n);
    int a, b, c;
    while(std::cin >> a >> b >> c){
        g.at(a - 1).push_back(std::make_pair(b - 1, c));
        g.at(b - 1).push_back(std::make_pair(a - 1, c)); // for undirected graph
    }
    
    std::vector<int> color(n, -1);
    for(int i = 0; i < n; ++i){
        if(-1 == color.at(i)){
            color.at(i) = 0;
            dfs(color, g, i); // <- ここがおかしい．0 で 0-index を初期化するなりの dfs を考えねばだめ
        }
    }

    print(color);

    return 0;
}
