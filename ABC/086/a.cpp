#include <iostream>#include <string>int main(){    int a, b;    std::cin >> a >> b;    int prod = a*b;    std::string str;    if(0 == prod%2){        str = "Even";    }else{        str = "Odd";    }       std::cout << str << std::endl;}