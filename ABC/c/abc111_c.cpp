#include <iostream>
#include <vector>
#include <cmath>

const int NUM_ELEM = 1e5 + 1;

int main(){
    int n;
    std::cin >> n;

    std::vector<std::vector<long long>> count(2, std::vector<long long>(NUM_ELEM, 0));
    for(int i = 0; i < n; ++i){
        int val;
        std::cin >> val;

        ++count.at(i % 2).at(val);
    }

    auto itrA = std::max_element(count.at(0).begin(), count.at(0).end());
    auto itrB = std::max_element(count.at(1).begin(), count.at(1).end());
    
    int distA = std::distance(count.at(0).begin(), itrA);
    int distB = std::distance(count.at(1).begin(), itrB);

    long long vari = *itrA + *itrB;
    
    std::sort(count.at(0).begin(), count.at(0).end());
    std::sort(count.at(1).begin(), count.at(1).end());
    
    if(distA == distB){
        long long a = count.at(0).at(NUM_ELEM - 1) + count.at(1).at(NUM_ELEM - 2);
        long long b = count.at(1).at(NUM_ELEM - 1) + count.at(0).at(NUM_ELEM - 2);
        vari = std::max(a, b);
    }

    std::cout << n - vari << std::endl;

    return 0;
}