// ex-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // EX 1:
    //int number;
    //std::cin >> number;

    //std::cout << ((number % 2 == 0) ? "0" : "1") << std::endl;

    // EX 2:
    //int number;
    //std::cin >> number;

    //int num1, num2, num3, num4;
    //num1 = number % 10;
    //number /= 10;

    //num2 = number % 10;
    //number /= 10;

    //num3 = number % 10;
    //number /= 10;

    //num4 = number % 10;
    //number /= 10;

    //std::cout << num1 << num2 << num3 << num4 << std::endl;

    // EX 3:
    //char symbol;
    //std::cin >> symbol;

    //std::cout << ((int(symbol) >= 65 && int(symbol) <= 90) ? (int(symbol) - 64) : (int(symbol) - 96)) << 
    //    (int(symbol) >= 65 && int(symbol) <= 90) ? " 1" : " 0";

    // EX 4:
    //const double eRate = 1.12;

    //double euro, dollars;
    //std::cin >> euro >> dollars;

    //double epsilon = 1e-9;
    //double euroToDollars = euro * eRate;

    //std::cout << (std::fabs(dollars - euroToDollars) < epsilon ? " 1" : " 0");

    // EX 5:
    //int a, b;
    //std::cin >> a >> b;

    //std::cout << ((a < 5 || a > 93456) || (b < 5 || b > 93456)) ? " 1" : " 0";

    //std::cout << 0 << std::endl;
    //std::cout << ((a + b) * (a + b) * (a + b))
    //    + ((a - b) * (a - b))
    //    - ((a + b) * (a + b) * (a + b) * (a + b)) << std::endl;

    // EX 6:
    //int num1, num2, num3;
    //int num4, num5, num6;
    //std::cin >> num1 >> num2 >> num3;
    //std::cin >> num4 >> num5 >> num6;

    //int wholeNum1 = (num3 * 1) + (num2 * 10) + (num1 * 100);
    //int wholeNum2 = (num6 * 1) + (num5 * 10) + (num4 * 100);
    //std::cout << wholeNum1 + wholeNum2;

    // EX 7:
    int number, roomsFor1 = 0, roomsFor2 = 0, roomsFor5 = 0, roomsFor7 = 0, roomsFor10 = 0;
    std::cin >> number;

    roomsFor10 = (number >= 10) ? number / 10 : 0;
    number -= roomsFor10 * 10;

    roomsFor7 = (number >= 7) ? number / 7 : 0;
    number -= roomsFor7 * 7;

    roomsFor5 = (number >= 5) ? number / 5 : 0;
    number -= roomsFor5 * 5;

    roomsFor2 = (number >= 2) ? number / 2 : 0;
    number -= roomsFor2 * 2;

    roomsFor1 = (number >= 1) ? number / 1 : 0;
    number -= roomsFor1 * 1;

    std::cout << "Rooms for 1: " << roomsFor1 << std::endl;
    std::cout << "Rooms for 2: " << roomsFor2 << std::endl;
    std::cout << "Rooms for 5: " << roomsFor5 << std::endl;
    std::cout << "Rooms for 7: " << roomsFor7 << std::endl;
    std::cout << "Rooms for 10: " << roomsFor10 << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
