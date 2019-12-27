#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;

    std::vector<int> people(n, 0);
 
    int a, x, y;
    while(std::cin >> a){
        for(int i = 0; i < a; ++i){
            std::cin >> x >> y;
            people.at(x) += y;
        }
    }

    std::cout << std::count_if(people.begin(), people.end(), [n](int score){return n - 1 == score;}) << std::endl;

    return 0;
}