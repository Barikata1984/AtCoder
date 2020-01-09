#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int n;
    std::cin >> n;

    std::vector<int> h(n);
    for(int i = 0; i < n; ++i){
        std::cin >> h.at(i);
    }

    int count = 0;
    std::vector<int>::iterator itr = std::find_if(h.begin(), h.end(), [](int i){
            return 0 < i;
        }), spot;

    while(h.end() != itr){
        spot = std::find_if(itr, h.end(), [](int i){
            return 0 == i;
        });

        while(spot != itr){
            --*itr++;
        }

        itr = std::find_if(h.begin(), h.end(), [](int i){
            return 0 < i;
        });

        ++count;
    }

    std::cout << count << std::endl;

    return 0;
}