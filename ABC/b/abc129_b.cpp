#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

int main(){
    int n;
    std::cin >> n;

    int val;
    std::vector<int> cumSum(n);
    std::cin >> cumSum.at(0);
    for(int i = 1; i < n; ++i){
        std::cin >> val;
        cumSum.at(i) = cumSum.at(i - 1) + val;
    }

    std::vector<int> vari(n - 1);
    for(int i = 0; i < n - 1; ++i){
        vari.at(i) = std::abs(cumSum.at(n - 1) - 2 * cumSum.at(i));
    }

    std::cout << *std::min_element(vari.begin(), vari.end()) << std::endl;

    return 0;
}