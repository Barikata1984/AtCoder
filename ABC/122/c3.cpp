#include <iostream>#include <map>#include <vector>#include <algorithm>int main(){    int n, q;    std::cin >> n >> q;    std::string s;    std::cin >> s;    std::vector<int> vec(s.size() + 1, 0);    for(int i = 0; i < s.size() - 1; ++i){        if("AC" == s.substr(i, 2)){            vec.at(i + 1) = vec.at(i) + 1;        }else{            vec.at(i + 1) = vec.at(i);        }    }    int start, end, count;    for(int i = 0; i < q; ++i){        std::cin >> start >> end;        std::cout << vec.at(end - 1) - vec.at(start - 1) << std::endl;;    }    return 0;}