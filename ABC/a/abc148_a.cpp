#include <iostream>

int main(){
    int a, b;
    std::cin >> a >> b;

    int ans;
    switch(a + b){
        case 3:
            ans = 3;
            break;
        case 4:
            ans = 2;
            break;
        case 5:
            ans = 1;
            break;
    }

    std::cout << ans << std::endl;

    return 0;
}