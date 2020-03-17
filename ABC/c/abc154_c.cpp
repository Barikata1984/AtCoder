#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;

    std::vector<bool> a(1000000001, false);
    int index, i = 0;
    while(std::cin >> index){
        if(!a.at(index)){
            a.at(index) = true;
        }else{
            break;
        }
        ++i;
    }

    std::string ans = "YES";
    if(i != n){
        ans = "NO";
    }

    std::cout << ans << std::endl;

    return 0;
}
