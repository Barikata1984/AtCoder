#include <iostream>int main(){    std::string s, t;    std::cin >> s >> t;    int sSz = s.size(), tSz = t.size(), i = sSz - tSz;    for(; 0 <= i; --i){        bool flg2 = true;        int j = 0;        std::string sub = s.substr(i, tSz);        while(flg2 && j < tSz){            flg2 = '?' == sub.at(j) || sub.at(j) == t.at(j);            ++j;        }        if(flg2){            break;        }        }    std::string ans = "UNRESTORABLE";    if(0 <= i){        s.replace(i, tSz, t);        for(int i = 0; i < sSz; ++i){            if('?' == s.at(i)){                s.at(i) = 'a';            }        }        ans = s;    }        std::cout << ans << std::endl;    return 0;}