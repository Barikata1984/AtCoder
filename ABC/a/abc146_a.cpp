#include <iostream>

int main(){
    std::string str;
    std::cin >> str;

    int ans;

    if("SUN" == str){
        ans = 7;
    }else if("MON" == str){
        ans = 6;
    }else if("TUE" == str){
        ans = 5;
    }else if("WED" == str){
        ans = 4;
    }else if("THU" == str){
        ans = 3;
    }else if("FRI" == str){
        ans = 2;
    }else if("SAT" == str){
        ans = 1;
    }

    std::cout << ans << std::endl;

    return 0;
}