#include <iostream>

int main(){

    int number;
    std::cin >> number;
    std::cout << number % 10;
    number /= 10;
    std::cout << number % 10;
    number /= 10;
    std::cout << number % 10;
    number /= 10;
    std::cout << number % 10;

return 0;
}