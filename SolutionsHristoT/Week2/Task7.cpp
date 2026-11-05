#include <iostream>

int main(){

    int n;
    std:: cin >> n;
    int one = 0, two = 0, five = 0, seven = 0, ten = 0;

    (n % 10 == 4) ? seven += 2 , n -= 14 : seven;
    (n/10 > 0) ? ten = n/10 , n -= ten*10 : ten;
    (n/7 > 0) ? seven = n/7 , n -= seven*7 : seven;
    (n/5 > 0) ? five = n/5 , n -= five*5 : five = 0;
    (n/2 > 0) ? two = n/2 , n -= two*2 : two = 0;
    (n > 0) ? one = 1 : one = 0;

    std::cout << "Rooms for 1: " << one << std::endl;
    std::cout << "Rooms for 2: " << two << std::endl;
    std::cout << "Rooms for 5: " << five << std::endl;
    std::cout << "Rooms for 7: " << seven << std::endl;
    std::cout << "Rooms for 10: " << ten << std::endl;
return 0;
}