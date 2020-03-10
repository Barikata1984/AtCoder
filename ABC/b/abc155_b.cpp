#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;

    int a;
    bool flg = true;
    while(std::cin >> a){
        if(0 == a % 2){
            flg = flg && (0 == a % 3 || 0 == a % 5);
        }
    }

    if(flg){
        std::cout << "APPROVED" << std::endl;
    }else{
        std::cout << "DENIED" << std::endl;
    }

    return 0;
}
