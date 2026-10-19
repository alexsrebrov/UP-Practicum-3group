// 6-calc2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char ln1_char1, ln1_char2, ln1_char3, ln2_char1, ln2_char2, ln2_char3;
    std::cin >> ln1_char1>> ln1_char2>> ln1_char3;
    std::cin >> ln2_char1 >> ln2_char2 >> ln2_char3;

    int num1 = 100 * (ln1_char1 - '0') + 10 * (ln1_char2 - '0') + (ln1_char3 - '0');
    int num2 = 100 * (ln2_char1 - '0') + 10 * (ln2_char2 - '0') + (ln2_char3 - '0');



    std::cout << (num1+num2)/10 ;
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
