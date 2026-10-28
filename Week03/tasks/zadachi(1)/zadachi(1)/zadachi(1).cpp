// zadachi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //TASK 1

        /*double num;
        std::cin >> num;

        if (num > 0)
            std::cout << "The number is positive";
        else if (num < 0)
            std::cout << "The number is negative";
        else
            std::cout << "The number is zero";*/


    //TASK 2

        /*double sum;
        std::cin >> sum;
        if (sum > 100 && sum<=250)
            sum *= 0.9;
        else if (sum > 250)
            sum *= 0.8;

        std::cout << "Final sum: " << sum;*/


        //TASK 3

        /*int num;
        std::cin >> num;
        std::cout << ((num % 2 == 0) ? "even" : "odd");*/


    //TASK 4

       /* int age;
        std::cin >> age;

        if (age >= 0) {
            if (age < 18)
                std::cout << "The person is NOT an adult";
            else if (age < 120)
                std::cout << "The person is an adult";
            else
                std::cout << "The person is dead, so sorry ;-;";
        }
        else
            std::cout << "The person is not born yet";*/



    //TASK 5
        //int num1, num2, num3;
        //int min, max;
        //std::cin >> num1 >> num2 >> num3;

        ////nachin 1 - pyrvata mi intuiciq, bachka, no izglejda ujasno i se pravqt edni i syshti proverki po nqkolko pyti
            ///*if (num1 >= num2) {
            //    if (num1 >= num3) {
            //        max = num1;
            //        if (num2 >= num3)
            //            min = num3;
            //        else 
            //            min = num2;
            //    }   
            //    else {
            //        max = num3;
            //        min = num2;
            //    }
            //        
            //}
            //else if (num2 >= num3) {
            //    max = num2;
            //    if (num1 >= num3)
            //        min = num3;
            //    else
            //        min = num1;
            //}
            //else {
            //    if (num1 >= num3) {
            //        min = num3;
            //        max = num1;
            //    }
            //    else {
            //        min = num1;
            //        max = num3;
            //    }
            //        
            //    
            //}*/

        ////nachin 2
            ///*max = num1;
            //min = num1;

            //if (num2 > max)
            //    max = num2;
            //if (num3 > max)
            //    max = num3;

            //if (num2 < min)
            //    min = num2;
            //if (num3 < min)
            //    min = num3;*/


        //std::cout << "Max: " << max << std::endl;
        //std::cout << "Min: " << min;



    //TASK 6

        /*char sym;
        std::cin >> sym;
        switch (sym) {
        case 'a':
        case 'u':
        case 'o':
        case 'i':
        case 'e':
        std::cout << "The symbol is a vowel";
        break;
        default:
        std::cout << "The symbol is not a vowel";
        }*/


    //TASK 7
        /* int day;
        std::cin >> day;*/

        //if-else

            /*if (day >= 1 && day <= 7) {
                std::cout << "Today is ";
                if (day == 1)
                    std::cout << "Monday";
                else if (day == 2)
                    std::cout << "Tuesday";
                else if (day == 3)
                    std::cout << "Wednesday";
                else if (day == 4)
                    std::cout << "Thursday";
                else if (day == 5)
                    std::cout << "Friday";
                else if (day == 6)
                    std::cout << "Saturday";
                else if (day == 7)
                    std::cout << "Sunday";
            }
            else
                std::cout << "According to my calculations the week has only 7 days (1-7), try again";*/


        //switch
            /*   switch (day) {
                case 1:
                    std::cout << "Today is Monday";
                    break;
                case 2:
                    std::cout << "Today is Tuesday";
                    break;
                case 3:
                    std::cout << "Today is Wednesday";
                    break;
                case 4:
                    std::cout << "Today is Thursday";
                    break;
                case 5:
                    std::cout << "Today is Friday";
                    break;
                case 6:
                    std::cout << "Today is Saturday";
                    break;
                case 7:
                    std::cout << "Today is Sunday";
                    break;
                default:
                    std::cout << "Your perseption of the week is out of my league, enter a valid day (1-7)";
                    break;
            }*/


        //TASK 8
            /*double num1, num2;
            char operation;
            std::cout << "Enter the calculation you want to solve: <num><operation (+, -, *, /)><num>"<<std::endl;
            std::cin >> num1 >> operation >> num2;
            switch(operation){
            case '+':
                std::cout << "= " << num1 + num2;
                break;
            case '-':
                std::cout << "= " << num1 - num2;
                break;
            case '*':
                std::cout << "= " << num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    std::cout << "= " << num1 / num2;
                }
                else
                    std::cout << "Division by 0 is Undefined";
                break;
            default:
                std::cout << "Enter a valid operation";
            }*/


        //TASK 9

            /*int num, p1, p2, p4, p5;
            std::cout << "Enter a 5-digit number"<<std::endl;
            std::cin >> num;
            
            if (num >= 10000 && num <= 99999) {
                p5 = num % 10;
                p4 = (num / 10) % 10;
                p2 = (num / 1000) % 10;
                p1 = num / 10000;


                if (p1 == p5 && p2 == p4) {
                    std::cout << "Your number is a palindrome, yey";
                }
                else
                    std::cout << "Your number is NOT a palindrome";
            }
            else
                std::cout << "Enter a valid 5-digit number next time";*/
            



        //TASK 10
            /*int day, month;
            std::cout << "Enter day and month:";
            std::cin >> day>> month;

            switch (month) {
            case 2:
                if (day == 28) {
                    day = 1;
                    month += 1;
                }
                else day += 1;
                break;

            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
                if (day == 31) {
                    day = 1;
                    month += 1;
                }
                else day += 1;
                break;

            case 12:
                if (day == 31) {
                    day = 1;
                    month = 1;
                }
                else day += 1;
                break;

            case 4:
            case 6:
            case 9:
            case 11:
                if (day == 30) {
                    day = 1;
                    month += 1;
                }
                else day += 1;
            }

            std::cout << day << " " << month;*/

        //TASK 11
           /* double grade;
            std::cin >> grade;

            if (grade >= 5.50 && grade < 6)
                std::cout << "Excellent";
            else if (grade >= 4.50 && grade < 5.5)
                std::cout << "Very Good";
            else if (grade >= 3.50 && grade < 4.5)
                std::cout << "Good";
            else if (grade >= 3 && grade < 3.5)
                std::cout << "Average";
            else if (grade >= 2 && grade < 3)
                std::cout << "Poor";
            else
                std::cout << "Invalid";*/

        //BONUS TASK
            int s;
            std::cin >> s;
            if (s >= 0 && s <= 2)
                std::cout << "simple";
            else if (s == 3 || s == 4)
                std::cout << "ops five";
            else if (s == 5)
                std::cout << "five";
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
