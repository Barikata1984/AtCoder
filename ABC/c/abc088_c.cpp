#include <iostream>
#include <vector>

int main(){
    std::vector<std::vector<int>> grid(3, std::vector<int>(3));
    int sum = 0;
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            std::cin >> grid.at(i).at(j);
            sum += grid.at(i).at(j);
        }
    }

    bool flg = true;

    int a, b, c;
    for(int i = 0; i < 2; ++i){
        a = grid.at(0).at(i + 1) - grid.at(0).at(i);
        b = grid.at(1).at(i + 1) - grid.at(1).at(i);
        c = grid.at(2).at(i + 1) - grid.at(2).at(i);
    }

    if(a != b || b != c || c != a){
        flg = false;
    }

    int d, e, f;
    for(int i = 0; i < 2; ++i){
        d = grid.at(i + 1).at(0) - grid.at(i).at(0);
        e = grid.at(i + 1).at(1) - grid.at(i).at(1);
        f = grid.at(i + 1).at(2) - grid.at(i).at(2);
    }

    if(d != e || e != f || f != d){
        flg = false;
    }

    if(0 != sum %3){
        flg = false;
    }

    std::string ans = "Yes";
    if(!flg){
        ans = "No";
    }

    std::cout << ans << std::endl;
}
