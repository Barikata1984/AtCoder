#include <iostream>
#include <set>

int main(){
    int n;
    std::string s;
    std::cin >> n >> s;

    int count = 0;
    for(int i = 0; i < 10; ++i){
        auto pos1 = s.find(std::to_string(i));
        if(std::string::npos != pos1){
            auto init1 = pos1 + 1, m = n - init1;
            auto sub1 = s.substr(init1, m);
            for(int j = 0; j < 10; ++j){
                auto pos2 = sub1.find(std::to_string(j));
                if(std::string::npos != pos2){
                    auto init2 = pos2 + 1, l = n - init2;
                    auto sub2 = sub1.substr(init2, l);
                    for(int k = 0; k < 10; ++k){
                        if(std::string::npos != sub2.find(std::to_string(k))){
                            ++count;
                        }
                    }
                }
            } 
        }
    }

    std::cout << count << std::endl;

    return 0;
}
