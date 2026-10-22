#include <iostream>

int main(){

    char number1digit1, number1digit2, number1digit3, number2digit1, number2digit2, number2digit3;
    std::cin >> number1digit1 >> number1digit2 >> number1digit3;
    std::cin >> number2digit1 >> number2digit2 >> number2digit3;

    int number1, number2;
    number1 = (number1digit1 - '0')*100 + (number1digit2 - '0')*10 + (number1digit3 - '0');
    number2 = (number2digit1 - '0')*100 + (number2digit2 - '0')*10 + (number2digit3 - '0');

    std::cout << number1digit1 << number1digit2 << number1digit3 << std::endl;
    std::cout << number1 << " " << number2 << std::endl;
    std::cout << (number1 + number2)/10 << std::endl;
return 0;
}