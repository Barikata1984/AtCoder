#include <iostream>#include <map>#include <vector>#include <algorithm>int main(){    std::map<int, int> people;    int name = 1;    int score;    for(int i = 0; i < 3; ++i){        std::cin >> score;        people.emplace(name++, score);    }    std::cout << std::distance(people.begin(), people.find(1)) + 1 << std::endl;    std::cout << std::distance(people.begin(), people.find(2)) + 1 << std::endl;    std::cout << std::distance(people.begin(), people.find(3)) + 1 << std::endl;    return 0;}