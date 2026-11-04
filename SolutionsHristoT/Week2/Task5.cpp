#include <iostream>

int main(){

    int a, b;
    std::cin >> a >> b;
    a >= 5 && a<= 93456 && b >= 5 && b<= 93456 ? std::cout << 0 << std::endl : std::cout << 1 << std::endl;
    std:: cout << (a+b)*(a+b)*(a+b) + (a-b)*(a-b) - (a+b)*(a+b)*(a+b)*(a+b) <<  std::endl;

return 0;
}