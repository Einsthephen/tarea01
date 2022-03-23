#include <iostream>

int main(void)
{
  int n {0};
  double result {0};
    for(n=10;n<= 100; n= n+1){
      
        if (n%2!=0) {
            result = {result + 1.0/n};
            }
    }
  std::cout << result;
    
    return 0;
}