#include <iostream>

int main(){
    int n, k;
    std::cin >> n >> k;

    int count = 0;
    while(0 != n){
        ++count;
        n /= k;
    }

    std::cout << count << std::endl;

    return 0;
}
