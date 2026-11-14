// solutions-week-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

// EX 1:
char changeCase(char symbol)
{
	if (symbol >= 'A' && symbol <= 'Z') return symbol + 32;

	else if (symbol >= 'a' && symbol <= 'z') return symbol - 32;

	return symbol;
}

// EX 2
int returnDigitFromCharNum(char symbol)
{
	if (symbol >= '0' && symbol <= '9') return symbol - '0';

	return -1;
}

//char returnCharFromDigit(int digit)
//{
//	if (digit < 0 || digit > 9) return char(digit);
//
//	return digit + '0';
//}

// TO DO

// EX 3:
// Не се сещам за по-добър начин за повдигане на отрицателни степени, затова връщам тип double
double pow(int n, int k)
{
	double result = 1;

	if (k == 0) return 1;

	else if (k < 0)
	{
		while (k != 0)
		{
			result *= n;
			k++;
		}
		return 1 / result;
	}

	while (k != 0)
	{
		result *= n;
		k--;
	}

	return result;
}

// EX 4:
int getRemainder(int a, int b)
{
	int result = a / b;
	int res1 = result * b;
	int res2 = a - res1;
	return res2;
}

// EX 5:
bool isTriangle(int a, int b, int c)
{
	if ((a + b > c) || (a + c > b) || (b + c > a)) return true;

	return false;
}

// EX 6:
double arithmeticProgression(int a, int d, int n)
{
	return a + (n - 1) * d;
}

double geometricProgression(int a, int q, int n)
{
	return a * pow(q, (n - 1));
}

// EX 7:
int reverse(int num)
{
	int count = log10(num);

	int mult = pow(10, count);
	int newNum = 0;
	while (num != 0)
	{
		newNum += (num % 10) * mult;
		mult /= 10;
		num /= 10;
	}

	return newNum;
}

// EX 8:
int concat(int first, int second)
{
	int newNum = first;
	int count = log10(second);
	int mult = pow(10, count + 1);

	return (newNum * mult) + second;
}

// EX 9:
int countDigits(int num)
{
	if (num == 0) return 1;

	int count = 0;
	while (num != 0)
	{
		count++;
		num /= 10;
	}

	return count;
}

// EX 10:
int countPermutations(int n)
{
	if (n <= 1) return 1;
	int permutations = 1;

	while (n != 0)
	{
		permutations *= n;
		n--;
	}

	return permutations;
}

int countVariations(int n, int k)
{
	int NPerm = countPermutations(n);
	int NMinusKPerm = countPermutations(n - k);
	return NPerm / NMinusKPerm;
}

int countCombinations(int n, int k)
{
	int NPerm = countPermutations(n);
	int NMinusKPerm = countPermutations(n - k);
	int KPerm = countPermutations(k);
	return NPerm / (NMinusKPerm * KPerm);
}

// EX 11:
bool isSuffix(int first, int second)
{
	if (second == 0)
	{
		return first == 0 || (first > 0 && first % 10 == 0);
	}


}

int main()
{
	// EX 1:
	//char symbol;
	//std::cin >> symbol;
	//std::cout << changeCase(symbol) << std::endl;

	// EX 2:
	//char symbol;
	//std::cin >> symbol;
	//std::cout << returnDigitFromCharNum(symbol) << std::endl;
	//int number;
	//std::cin >> number;
	//std::cout << returnCharFromDigit(number) << std::endl;

	// TO DO

	// EX 3:
	//int n, k;
	//std::cin >> n >> k;
	//std::cout << pow(n, k) << std::endl;

	// EX 4:
	//int number1, number2;
	//std::cin >> number1 >> number2;
	//std::cout << getRemainder(number1, number2) << std::endl;

	// EX 5:
	//int number1, number2, number3;
	//std::cin >> number1 >> number2 >> number3;
	//if (number1 <= 0 || number2 <= 0 || number3 <= 0)
	//{
	//	std::cout << "The numbers cannot be smaller or equal to zero!" << std::endl;
	//	return -1;
	//}
	//std::cout << (isTriangle(number1, number2, number3) == true ? "yes" : "no") << std::endl;

	// EX 6:
	//double a, d, n;
	//double b, q, m;
	//std::cin >> a >> d >> n;
	//std::cin >> b >> q >> m;
	//if (n <= 0 || m <= 0)
	//{
	//	std::cout << "The n/m-number in the progression cannot be smaller or equal to zero!" << std::endl;
	//	return -1;
	//}
	//std::cout << "Arithmetic progression: " << arithmeticProgression(a, d, n) << std::endl;
	//std::cout << "Geometric progression: " << geometricProgression(b, q, m) << std::endl;

	// EX 7:
	//int number;
	//std::cin >> number;
	//std::cout << reverse(number) << std::endl;

	// EX 8:
	//int number1, number2;
	//std::cin >> number1 >> number2;
	//std::cout << concat(number1, number2) << std::endl;

	// EX 9:
	//int number;
	//std::cin >> number;
	//std::cout << countDigits(number) << std::endl;

	// EX 10:
	//int number1, number2;
	//std::cin >> number1 >> number2;
	//std::cout << countPermutations(number1) << std::endl;
	//std::cout << countPermutations(number1) << std::endl;
	//std::cout << countPermutations(number1) << std::endl;

	// EX 11:

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
