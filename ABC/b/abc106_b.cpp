#include <iostream>
#include <cmath>

int main(){
    int n;
    std::cin >> n;
  
  	int ans = 0;
  	// scan the divided value from 1 to n
  	for(int i = 1; i <= n; ++i){
		if(0 == i % 2){
          continue;
        }
      
      	int count = 0;
		// search all the possible cobminations
		for(int j = 1; j <= std::sqrt(i); ++j){
          	int k = i / j;
          	// if the sum of (i / j) * j = i and i and j differ, increase count by 2
          	if(k != j && i == k * j){
               	count += 2;
            }
        }

	    if(8 == count){
          	++ans;
        }
    }
  
  	std::cout << ans << std::endl;
  
    return 0;
}
