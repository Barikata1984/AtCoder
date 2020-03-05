#include <iostream>

int main(){
    int h, n;
    std::cin >> h >> n;

    int sum = 0;
    for(int i = 0; i < n; ++i){
        int val;
        std::cin >> val;
        sum += val;
    }

    if(h <= sum){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
    
    return 0;
}
