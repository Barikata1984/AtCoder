#include <iostream>
#include <vector>
#include <cmath>

int main(){
    int n;
    std::cin >> n;

    std::vector<float> c(n - 1), s(n - 1), f(n - 1);
    for(int i = 0; i < n - 1; ++i){
        std::cin >> c.at(i) >> s.at(i) >> f.at(i);
    }

    for(int i = 0 ; i < n - 1; ++i){
        int j = i;
        double time = 0;
        while(j < n - 1){
            if(j == i){
                time += s.at(j) + c.at(j);
            }else{
                if(time < s.at(j)){
                    time = s.at(j) + c.at(j);
                }else{
                    time = std::ceil((time - s.at(j)) / f.at(j)) * f.at(j) + s.at(j) + c.at(j);
                }
            }
            ++j;
        }

        std::cout << time << std::endl;
    }

    std::cout << 0 << std::endl;

    return 0;
}