#include <iostream>
#include <vector>

int main(){
    int n, m;
    std::cin >> n >> m;

    std::vector<int> cases(n);
    for(int i = 0; i < n; ++i){
        cases.at(i) = i + 1;
    }

    int val, current = 0;
    while(std::cin >> val){
        auto itr = std::find(cases.begin(), cases.end(), val);
        int buf = *itr;
        *itr = current;
        current = val;
    }

    for(int i = 0; i < n; ++i){
        std::cout << cases.at(i) << std::endl;
    }

    return 0;
}
