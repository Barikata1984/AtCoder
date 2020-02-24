#include <algorithm>
#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;

    std::vector<int> ref;
    for(int i = 1; i <= n; ++i){
        ref.push_back(i);
    }

    std::vector<std::vector<int>> refs;
    do{
        refs.push_back(ref);
    }while(std::next_permutation(ref.begin(), ref.end()));

    std::vector<int> p(n), q(n);
    for(int i = 1; i <= n; ++i){
        std::cin >> p.at(i - 1);        
    }
    for(int i = 1; i <= n; ++i){
        std::cin >> q.at(i - 1);        
    }

    auto a = std::distance(refs.begin(), std::find(refs.begin(), refs.end(), p));
    auto b = std::distance(refs.begin(), std::find(refs.begin(), refs.end(), q));

    std::cout << std::abs(a - b) << std::endl;

    return 0;
}