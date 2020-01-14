#include <iostream>
#include <map>

int main(){
    int n;
    std::cin >> n;

    std::multimap<int, int> height;
    for(int i = 0; i < n; ++i){
        int h;
        std::cin >> h;
        height.insert(std::make_pair(h, i + 1));
    }

    for(auto ritr = height.rbegin(); height.rend() != ritr; ++ritr){
        std::cout << ritr->second << std::endl; 
    }

    return 0;
}