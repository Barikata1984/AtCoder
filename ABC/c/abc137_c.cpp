#include <iostream>
#include <vector>

int sumAtoB(int a, int b){
    int rng = b - a + 1;
    return rng / 2 * (a + b) + (rng % 2) * (rng / 2 + 1);
}

int main(){
    int n;
    std::cin >> n;

    std::vector<std::string> strs(n);
    for(int i = 0; i < n; ++i){
        std::cin >> strs.at(i);
        std::sort(strs.at(i).begin(), strs.at(i).end());
    }

    std::sort(strs.begin(), strs.end());

    int i = 0, flg = i + 1, count = 0;
    while(){
        if(strs.at(i) == strs.at(spot)){
            ++spot;
        }else{
            count += sumAtoB(i, spot - 1);
            i = i + 1;
            spot = i + 1;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
