#include <iostream>#include <map>#include <vector>#include <algorithm>int main(){    int n;    std::cin >> n;    std::vector<int> a(n);    for(int i = 0; i < n; ++i){        std::cin >> a.at(i);    }    int count = 0;    for(int i = n - 1; 0 <=i; --i){        for(int j = i - 1; 0 <= j; --j){            if(a.at(j) == a.at(i)){                ++count;                break;            }        }    }    std::cout << count << std::endl;    return 0;}