// zadachiWeek5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//TASK 1
char changeCase(char symbol) {
    const int gapBetweenUpperAndLowercase='a'-'A';

    if (symbol >= 'A' && symbol <= 'Z') {
        symbol = symbol + gapBetweenUpperAndLowercase;
    }else if (symbol >= 'a' && symbol <= 'z') {
        symbol = symbol - gapBetweenUpperAndLowercase;
    }

    return symbol;
}

//TASK 2
int symbolToInt(char symbol) {
    if (symbol >= '0' && symbol <= '9') {
        return symbol - '0';
    }
    else return -1;
}

char intToSymbol(int num) {
    if (num >= 0 && num <= 9) {
        return num + '0';
    }
    else {
        return 'r';
    }
}

//TASK3
    int pow(int n, int k) {
        int res=1;
        for (size_t i = 0; i < k; i++)
        {
            res *= n;
        }
        return res;
    }

//TASK4
    int getRemainder1(int a, int b) {
        while (a >= b) {
            a -= b;
        }
        return a;
    }

    //way better
    int getRemainder2(int a, int b) {
        return a-b*(a / b);
    }
//TASK5
	bool isTriangle(int a, int b, int c) {
		int maxSide = a;
		if (b > maxSide) maxSide = b;
		if (c > maxSide) maxSide = c;

        if (maxSide == a && a < b + c) return 1;
        else if (maxSide == b && b < a + c) return 1;
        else if (maxSide == c && c < a + b) return 1;
        else return 0;
	}

//TASK6
    double arithmeticProgression(double a, double d, int n) {
        return a + (n - 1) * d;
    }

    double geometricProgression(double a, double q, int n) {
        for (size_t i = 1; i < n; i++)
        {
            a *= q;
        }

        return a;
    }

//TASK7
    int reverse(int num) {
        int newNum = 0;
        while (num > 0) {
            newNum *= 10;
            newNum += num % 10;
            num /= 10;
        }
        return newNum;
    }

//TASK8
    int concat(int first, int second) {
        int temp = second;
        while (temp > 0) {
            temp /= 10;
            first *= 10;
        }
        
        first += second;
        return first;
    }

//TASK9
    int countDigits(int num) {
        int counter=0;
        while (num > 0) {
            counter++;
            num /= 10;
        }
        return counter;
    }

//TASK10
    int countPermutations(int n) {
        int count = 1;
        for (int i = n ; i > 0; i--)
        {
            count *= i;
        }
        return count;
    }

    int countVariations(int n, int k) {
        return countPermutations(n) / countPermutations(n - k);
    }

    int countCombinations(int n, int k) {
        return countVariations(n, k) / countPermutations(k);
    }
//TASK11
    bool isSuffix(int first, int second) {
        if (first < second) return 0;
        else {
            while (second > 0) {
                if (second % 10 != first % 10) return 0;
                first /= 10;
                second /= 10;
            }
            return  1;
        }
    }

//TASK12
    bool isPrefix(int first, int second) {
        if (first < second) return 0;
        else {
            int secondLen = countDigits(second);
            int firstLen = countDigits(first);
            first /= pow(10, firstLen-secondLen);
            if (first == second) return 1;
            else return 0;
        }
    }

//TASK13
    bool isInfix(int first, int second) {
        if (first < second) return 0;
        else {
            while (first > 0) {
                int temp1 = first;
                int temp2 = second;
                while (temp2 > 0) {
                    if (temp1 % 10 != temp2 % 10) {
                        break;
                    }
                    else {
                        temp1 /= 10;
                        temp2 /= 10;
                    }

                }
                if (temp2 == 0) return 1;

                first /= 10;
            }
            return 0;
        }
    }

//TASK14
    void cipher(int n) {
        char lastDigit = 1;
        int specialSymbolCounter=0;
        for (size_t i = 0; i < n; i++)
        {
            char symbol;
            std::cin >> symbol;

            if (symbol >= 'A' && symbol <= 'Z' || (symbol >= 'a' && symbol <= 'z')) std::cout << changeCase(symbol);
            else if (symbol >= '0' && symbol <= '9') {
                symbol = symbolToInt(symbol);
                std::cout << concat(symbol, lastDigit);
                lastDigit = symbol;
            }
            else if (symbol == '@' || symbol == '!' || symbol == '#') specialSymbolCounter++;
            else std::cout << symbol;
        }
        std::cout << specialSymbolCounter;
    }

int main()
{
    //TASK1
       /* std::cout<<changeCase('K');
        std::cout << changeCase('f');
        std::cout << changeCase('5');*/

    //TASK2
        /*std::cout << symbolToInt('a');
        std::cout << symbolToInt('7');

        std::cout << intToSymbol(5);
        std::cout << intToSymbol(50);*/

    //TASK3
        /*std::cout<<pow(2, 5);*/

    //TASK4
        /*std::cout<<getRemainder1(5, 2);
        std::cout << getRemainder2(15, 3);*/

    //TASK5
        
        /*std::cout << isTriangle(3, 4, 5);
        std::cout << isTriangle(1, 4, 5);*/

    //TASK6
        /*std::cout<<arithmeticProgression(2, 4, 5);
        std::cout << geometricProgression(2, 0.5, 2);*/

    //TASK7
        /*std::cout << reverse(3456);*/
    
    //TASK8
        /*std::cout << concat(3, 34);*/

    //TASK9
        /*std::cout << countDigits(34567);*/

    //TASK10
        /*std::cout << countPermutations(5)<<std::endl;
        std::cout << countVariations(5, 3)<<std::endl;
        std::cout << countCombinations(5, 3);*/

    //TASK11
        /*std::cout << isSuffix(1234, 34);
        std::cout << isSuffix(1, 34);
        std::cout << isSuffix(1234, 35);*/

    //TASK12
        /*std::cout << isPrefix(1234, 12);
        std::cout << isPrefix(1, 34);
        std::cout << isPrefix(1234, 35);*/

    //TASK13
        /*std::cout << isInfix(123445678, 2345);
        std::cout << isInfix(12345678, 2345);*/

    //TASK14
        cipher(5);
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
