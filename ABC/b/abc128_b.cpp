#include <iostream>
#include <utility>
#include <vector>

int main(){
    int n;
    std::cin >> n;

    std::vector<std::pair<std::pair<std::string, int>, int>> list(n);
    std::string str;
    int p;
    for(int i = 0; i < n; ++i){
        std::cin >> str >> p;
        list.at(i) = std::make_pair(std::make_pair(str, -p), i + 1);
    }

   std::sort(list.begin(), list.end());

    for(int i = 0; i < n; ++i){
        std::cout << list.at(i).second << std::endl;
    }    

    return 0;
}