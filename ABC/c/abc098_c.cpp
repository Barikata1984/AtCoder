#include <iostream>
#include <vector>

const int INF = 1e9 + 7;

int main(){
    int n;
    std::string s;
    std::cin >> n >> s;

    int west = 0, east = 0;
    std::vector<int> westgazers(n, 0), eastgazers(n, 0);
    for(int i = 1; i < n; ++i){
        if('W' == s.at(i - 1)){
            ++west;
        }
        westgazers.at(i) = west;

        if('E' == s.at(n - i)){
            ++east;
        }
        eastgazers.at(n - 1 - i) = east;
    }

    int min = INF;
    for(int i = 0; i < n; ++i){
        min = std::min(min, westgazers.at(i) + eastgazers.at(i));
    }

    std::cout << min << std::endl;

    return 0;
}