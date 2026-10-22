#include <iostream>

int main(){

    //Task 1

    

    // Task 2
    // double price;
    // std::cin >> price;
    // if (price > 100)std::cout << price*0.9;
    // else if (price > 250)std::cout << price*0.8;
    // else std::cout << price;

    //Task 3
    // int number;
    // std::cin >> number;
    // if (number % 2 == 1)std::cout << "This number is uneven.";
    // else std::cout << "This number is even.";

    //Task 4
    // int age;
    // std::cin >> age;
    // if (age < 18)std::cout << "You are too young to vote.";
    // else if (age == 18)std::cout << "You are barely old enough to vote.";
    // else if (age >= 120)std::cout << "You are probably dead.";
    // else std::cout << "You are good.";



    //Task 5
    // int a, b, c;
    // std::cin >> a >> b >> c;
    // int min = a, max = a;
    // if (min > b)min = b;
    // if (min > c)min = c;
    // if (max < b)max = b;
    // if (max < c)max = c;
    // std::cout << "Min = " << min << " Max = " << max;


    //Task 6
    // char letter;
    // std::cin >> letter;
    // switch (letter) {
    //     case 'a':
    //     case 'e':
    //     case 'u':
    //     case 'o':
    //     case 'i':
    //     case 'A':
    //     case 'E':
    //     case 'U':
    //     case 'O':
    //     case 'I':
    //         std::cout << "The letter is a vowel :)";
    //         break;
    //     default:
    //         std::cout << "The letter is not a vowel :(";
    // }

    // //Task 7
    // int day;
    // std::cin >> day;
    //
    // if (day == 1)std::cout << "Monday";
    // else if (day == 2)std::cout << "Tuesday";
    // else if (day == 3)std::cout << "Wednesday";
    // else if (day == 4)std::cout << "Thursday";
    // else if (day == 5)std::cout << "Friday";
    // else if (day == 6)std::cout << "Saturday";
    // else if (day == 7)std::cout << "Sunday";


    //Task 8
    // int number1, number2;
    // char symbol;
    // std:: cin >> number1 >> symbol >> number2;
    //
    // switch (symbol) {
    //     case '+':
    //         std::cout << number1 + number2;
    //         break;
    //     case '-':
    //         std::cout << number1 - number2;
    //         break;
    //     case '/':
    //         number2 != 0 ?std::cout << number1 / number2 : std::cout << "We cannot divide by 0!";
    //         break;
    //     case '*':
    //         std::cout << number1 * number2;
    //         break;
    // }

    //Task 9
    // int number, palindrome, number0;
    // std::cin >> number;
    // number0 = number;
    //
    // palindrome = number0 % 10 * 10000;
    // number0 /= 10;
    // palindrome += number0 % 10 * 1000;
    // number0 /= 10;
    // palindrome += number0 % 10 * 100;
    // number0 /= 10;
    // palindrome += number0 % 10 * 10;
    // number0 /= 10;
    // palindrome += number0 % 10;
    //
    //
    // number - palindrome == 0 ? std::cout << "It is a five digit palindrome:)" : std::cout << "It is not a five digit palindrome:(";


    //Task 10
    // int month, day;
    // std::cin >> day >> month;
    //
    // if (month == 2) {
    //     if (day == 28)std::cout << 1 << " " << ++month;
    //     else std::cout << day + 1 << " " << month;
    // }
    // else if (month == 4 || month == 6 || month == 9 || month == 11) {
    //     if (day == 30)std::cout << 1 << " " << ++month;
    //     else std::cout << day + 1 << " " << month;
    // }
    // else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    //     if (day == 31)std::cout << 1 << " " << ++month;
    //     else std::cout << day + 1 << " " << month;
    // }

    //Task 11
    // double grade;
    // std::cin >> grade;
    //
    // if (grade >= 5.50)std::cout << "Excellent";
    // else if (grade >= 4.50)std::cout << "Very Good";
    // else if (grade >= 3.50)std::cout << "Good";
    // else if (grade >= 3.00)std::cout << "Average";
    // else std::cout << "Poor";

return 0;
}