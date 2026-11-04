// solutions-week-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    // EX 1:
    //double number;
    //std::cout << "Enter a whole OR decimal number: ";
    //std::cin >> number;

    //if (number > 0)
    //{
    //    std::cout << "The number is positive" << std::endl;
    //}
    //else if (number < 0)
    //{
    //    std::cout << "The number is negative" << std::endl;
    //}
    //else std::cout << "The number is zero" << std::endl;

    // EX 2
    //double price = 0;
    //std::cout << "Enter a decimal price: ";
    //std::cin >> price;

    //if (price > 100 && price <= 250)
    //{
    //    price += (price * 0.1);
    //}
    //else if (price > 250) price += (price * 0.2);
    //std::cout << "New price: " << price << std::endl;

    //EX 3:
    //int number = 0;
    //std::cout << "Enter a whole number: ";
    //std::cin >> number;
    //std::cout << ((number % 2 == 0) ? "Even" : "Odd") << std::endl;

    // EX 4:
    
    // // да кажем, че средноаритметично се живее най-много до 100 хахахахаха
    
    //int years = 0;
    //std::cout << "Enter years as a whole number: ";
    //std::cin >> years;
    //if (years >= 18 && years <= 100)
    //{
    //    std::cout << "The citizen is of a legal age" << std::endl;
    //}
    //else if (years <= 0 || years > 100)
    //{
    //    std::cout << "Invalid years!" << std::endl;
    //}
    //else std::cout << "The citizen is NOT of a legal age" << std::endl;

    // EX 5:
    //int num1, num2, num3;
    //std::cout << "Enter three numbers: ";
    //std::cin >> num1 >> num2 >> num3;
    //
    //if (num1 == num2 && num1 == num3)
    //{
    //    std::cout << "The 3 numbers are equal!" << std::endl;
    //    return -1;
    //}

    //std::cout << "Largest number is: ";
    //if (num1 >= num2 && num1 >= num3)
    //{
    //    std::cout << num1 << std::endl;
    //}
    //else if (num2 >= num1 && num2 >= num3)
    //{
    //    std::cout << num2 << std::endl;
    //}
    //else if (num3 >= num1 && num3 >= num2)
    //{
    //    std::cout << num3 << std::endl;
    //}

    //std::cout << "Smallest number is: ";
    //if (num1 <= num2 && num1 <= num3)
    //{
    //    std::cout << num1 << std::endl;
    //}
    //else if (num2 <= num1 && num2 <= num3)
    //{
    //    std::cout << num2 << std::endl;
    //}
    //else if (num3 <= num1 && num3 <= num2)
    //{
    //    std::cout << num3 << std::endl;
    //}

    // EX 6:
    //char symbol;
    //std::cout << "Enter a symbol: ";
    //std::cin >> symbol;

    //switch (symbol)
    //{
    //case 65:
    //case 69:
    //case 73:
    //case 79:
    //case 85:
    //case 89:
    //case 97:
    //case 101:
    //case 105:
    //case 111:
    //case 117:
    //case 121:
    //    std::cout << "yes" << std::endl;
    //    break;
    //default:
    //    std::cout << "no" << std::endl;
    //    break;
    //}

    // EX 7:
    //int dow;
    //std::cout << "Enter a day of the week as a whole number: ";
    //std::cin >> dow;

    //WITH SWITCH CASE:
    //switch (dow)
    //{
    //case 1:
    //    std::cout << "Monday" << std::endl;
    //    break;
    //case 2:
    //    std::cout << "Tuesday" << std::endl;
    //    break;
    //case 3:
    //    std::cout << "Wednesday" << std::endl;
    //    break;
    //case 4:
    //    std::cout << "Thursday" << std::endl;
    //    break;
    //case 5:
    //    std::cout << "Friday" << std::endl;
    //    break;
    //case 6:
    //    std::cout << "Saturday" << std::endl;
    //    break;
    //case 7:
    //    std::cout << "Sunday" << std::endl;
    //    break;
    //default:
    //    std::cout << "No such a number corresponds to a day of the week!" << std::endl;
    //    break;
    //}

    // WITH IF/ELSE:
    //if (dow == 1)
    //{
    //    std::cout << "Monday" << std::endl;
    //}
    //else if (dow == 2)
    //{
    //    std::cout << "Tuesday" << std::endl;
    //}
    //else if (dow == 3)
    //{
    //    std::cout << "Wednesday" << std::endl;
    //}
    //else if (dow == 4)
    //{
    //    std::cout << "Thursday" << std::endl;
    //}
    //else if (dow == 5)
    //{
    //    std::cout << "Friday" << std::endl;
    //}
    //else if (dow == 6)
    //{
    //    std::cout << "Saturday" << std::endl;
    //}
    //else if (dow == 7)
    //{
    //    std::cout << "Sunday" << std::endl;
    //}
    //else std::cout << "No such a number corresponds to a day of the week!" << std::endl;

    // EX 8:
    //double num1, num2;
    //char oper;
    //std::cout << "Enter two decimal OR whole numbers: ";
    //std::cin >> num1 >> num2;
    //std::cout << "Enter an operator from these: [+, -, /, *]: ";
    //std::cin >> oper;

    //std::cout << "The result is: ";
    //switch (oper)
    //{
    //case '+':
    //    std::cout << num1 + num2 << std::endl;
    //    break;
    //case '-':
    //    std::cout << num1 - num2 << std::endl;
    //    break;
    //case '*':
    //    std::cout << num1 * num2 << std::endl;
    //    break;
    //case '/':
    //    if (num2 == 0)
    //    {
    //        std::cout << "Cannot divide by 0!" << std::endl;
    //        break;
    //    }
    //    std::cout << num1 / num2 << std::endl;
    //    break;
    //default:
    //    std::cout << "No such an operator!" << std::endl;
    //    break;
    //}

    // EX 9:
    //int number = 0, count = 0;
    //std::cout << "Enter a number between 10000 and 99999: ";
    //std::cin >> number;
    //int multiplier = 1;

    //if (number < 10000 || number > 99999)
    //{
    //    std::cout << "The number is not in the dedicated range!" << std::endl;
    //    return -1;
    //}

    //int numSafe = number;
    //while (numSafe != 0)
    //{
    //    numSafe /= multiplier;
    //    multiplier *= 10;
    //    count++;
    //}

    //int multiplier2 = pow(10, count);
    //int numberSafe = number;
    //int oppositeNumber = 0;
    //while (numberSafe != 0)
    //{
    //    oppositeNumber += (numberSafe % 10) * multiplier2;
    //    numberSafe /= 10;
    //    multiplier2 /= 10;
    //}

    //while (number != 0)
    //{
    //    if (number % 10 != oppositeNumber % 10)
    //    {
    //        std::cout << "The number is NOT a palendrome!" << std::endl;
    //        return -1;
    //    }
    //    number /= 10;
    //    oppositeNumber /= 10;
    //}
    //std::cout << "The number is a palendrome!" << std::endl;

    // EX 10:
    //int day, month;
    //std::cout << "Enter a day:month date: ";
    //std::cin >> day >> month;
    //if (day < 1 || day > 31 || month < 1 || month > 12 || (month == 2 && day > 28))
    //{
    //    std::cout << "Invalid input!" << std::endl;
    //    return -1;
    //}

    //bool is31Days = (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12);

    //switch (is31Days)
    //{
    //case true:
    //    if (month == 12 && day == 31)
    //    {
    //        month = 1;
    //        day = 1;
    //    }
    //    else if (day == 31)
    //    {
    //        day = 1;
    //        month++;
    //    }
    //    else day++;
    //    break;
    //case false:
    //    if (month == 2 && day == 28)
    //    {
    //        month++;
    //        day = 1;
    //    }
    //    else if (day == 30)
    //    {
    //        day = 1;
    //        month++;
    //    }
    //    else day++;
    //    break;
    //default:
    //    break;
    //}
    //
    //std::cout << "Day: " << day << " Month:" << month << std::endl;

    // EX 11:
    //double grade;
    //std::cout << "Enter a grade as a decimal between 2 and 6: ";
    //std::cin >> grade;

    //if (grade >= 5.50 && grade <= 6)
    //{
    //    std::cout << "Excellent" << std::endl;
    //}
    //else if (grade >= 4.50 && grade < 5.50)
    //{
    //    std::cout << "Very Good" << std::endl;
    //}
    //else if (grade >= 3.50 && grade < 4.50)
    //{
    //    std::cout << "Good" << std::endl;
    //}
    //else if (grade >= 3 && grade < 3.50)
    //{
    //    std::cout << "Average" << std::endl;
    //}
    //else if (grade >= 2 && grade < 3)
    //{
    //    std::cout << "Poor" << std::endl;
    //}
    //else std::cout << "Invalid grade!" << std::endl;

    // BONUS:
    //int s;
    //std::cout << "Enter a whole number between 0 and 5: ";
    //std::cin >> s;

    //if (s >= 0 && s <= 2)
    //{
    //    std::cout << "simple" << std::endl;
    //}
    //else if (s == 3 || s == 4)
    //{
    //    std::cout << "ops" << std::endl;
    //}
    //else if (s == 5)
    //{
    //    std::cout << "five" << std::endl;
    //}
    //else std::cout << "Invalid number!" << std::endl;
    
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
