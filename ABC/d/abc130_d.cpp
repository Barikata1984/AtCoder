#include <iostream>#include <numeric>#include <vector>int main(){    long long n, k;    std::cin >> n >> k;    long long count = 0;    std::vector<long long> b(n);    std::cin >> b.at(0);    for(int i = 1; i < n; ++i){        long long val;        std::cin >> val;        b.at(i) = b.at(i - 1) + val;        if(k <= b.at(i)){            ++count;        }    }    for(int i = 0; i < n; ++i){        for(int j = i + 1; j < n; ++j){            if(k <= b.at(j) - b.at(i)){                ++count;            }        }    }    std::cout << count << std::endl;    return 0;}