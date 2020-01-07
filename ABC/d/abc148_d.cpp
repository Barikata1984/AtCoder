#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int n;
    std::cin >> n;

    int val;
    std::vector<int> a = {9};   // <- it enables to use unified calculation to derive a distance.
    for(int i = 0; i < n; ++i){
        std::cin >> val;
        a.push_back(val);
    }

    int i = 1, ans = 0;
    std::vector<int>::iterator preItr = a.begin(), currItr = preItr;
    while(a.end() != currItr){
        currItr = std::find(preItr, a.end(), i++);
        ans += std::distance(preItr, currItr) - 1;  // <- this calculation
        preItr = currItr;
    }

    if(2 == i && ans == a.size() - 1){
        ans = -1;
    }

    std::cout << ans << std::endl;

    return 0;
}