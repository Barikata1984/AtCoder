#include <iostream>int main(){    int n, k;    std::cin >> n >> k;    std::string d = "";    char buf;    for(int i = 0; i < k; ++i){        std::cin >> buf;        d += buf;    }    bool flg = false;    std::string nStr;    while(!flg){        nStr = std::to_string(n);        for(int i = 0; i < k; ++i){            if(std::string::npos == nStr.find(d.at(i))){                flg = true;            }else{                flg = false;                ++n;                break;            }                        }    }    std::cout << nStr << std::endl;}