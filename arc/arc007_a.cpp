#include <iostream>#include <algorithm>int main(){    char x;    std::cin >> x;    std::string s;    std::cin >> s;    std::string::iterator itr = std::find(s.begin(), s.end(), x);    while(std::string::npos != s.end()){        s.erase(itr);        itr = std::find(s.begin(), s.end(), x);    }    std::cout << s << std::endl;    return 0;}