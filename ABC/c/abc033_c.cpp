#include <iostream>int main(){    std::string s;    std::cin >> s;    	s += "+";    auto i = 0, count = 0;    while(i < s.size()){        int j = s.find("+", i);        if(-1 == s.substr(i, j - i + 1).find("0")){            ++count;        }        i = j + 1;    }    std::cout << count << std::endl;    return 0;}