// solutions-week-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

// EX 1:
int factoriel(int n)
{
	int fact = 1;

	if (n <= 1) return 1;

	while (n != 1)
	{
		fact = fact * n;
		n--;
	}

	return fact;
}

// EX 2:
void threeEvenInRow()
{
	int number = 0, count = 0, privNumber = -1;
	do
	{
		std::cin >> number;
		if ((privNumber % 2 == 0) && (number % 2 == 0) && (privNumber == number - 2) || (number % 2 == 0)) count++;
		else count = 0;
		privNumber = number;
	} while (count != 3);
}

// EX 3:
bool isPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

// EX 4:
int fibonaci(int n)
{
	int sum = 0, n1 = 0, n2 = 1;
	while (n > 1)
	{
		sum += n1 + n2;
		n1 = n2;
		n2 = sum;
		sum = 0;
		n--;
	}
	return n2;
}

// EX 5:
int sumOfDigits(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}

// EX 6:
int countOfDigits(int n)
{
	int count = 0;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return count;
}

// EX 7:
void printArrow(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << j << " ";
		}

		std::cout << std::endl;
	}

	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 1; j <= n - 1 - i; j++)
		{
			std::cout << j << " ";
		}

		std::cout << std::endl;
	}
}

// EX 8:
void printByConditions()
{
	for (int i = 1000; i <= 9999; i++)
	{
		int num = i;
		int forthDigit = num % 10;
		num /= 10;
		int thirdDigit = num % 10;
		num /= 10;
		int secondDigit = num % 10;
		num /= 10;
		int firstDigit = num % 10;

		if (firstDigit % 2 == 0 && thirdDigit % 2 == 0 &&  (firstDigit + secondDigit) == forthDigit)
		{
			std::cout << i << " ";
		}
	}
}

// EX 9:
void printUniqueDivisors(int n)
{
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			std::cout << i << " " << (n / i) << std::endl;
		}
	}
}

// EX 10:
void sumOfEvenIndexes()
{
	int count = 0, sum = 0, number = -1, privNumber = 0;
	bool areEven = (privNumber == number);
	while (!areEven)
	{
		std::cin >> number;
		if (number % 5 != 0 && count % 2 == 0)
		{
			count++;
			sum += number;
		}
		else if (number % 5 != 0) count++;
		areEven = (privNumber == number);
		privNumber = number;
	}

	std::cout << sum << std::endl;
}

// EX 11:
void largestAndSmallestNumbers()
{
	int n, number;
	int min = 2147483647;
	int max = -2147483647;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		std::cin >> number;
		if (number < min) min = number;
		if (number > max) max = number;
	}

	std::cout << "Max: " << max << std::endl;
	std::cout << "Min: " << min << std::endl;
}


int main()
{
    // EX 1:
	//int number;
	//std::cin >> number;
	//std::cout << factoriel(number) << std::endl;

	// EX 2:
	//threeEvenInRow();

	// EX 3:
	//int number = 0;
	//std::cin >> number;
	//std::cout << (isPrime(number) == true ? "true" : "false") << std::endl;

	// EX 4:
	//int number;
	//std::cin >> number;
	//std::cout << fibonaci(number) << std::endl;

	// EX 5:
	//int number;
	//std::cin >> number;
	//std::cout << sumOfDigits(number) << std::endl;

	// EX 6:
	//int number;
	//std::cin >> number;
	//std::cout << countOfDigits(number) << std::endl;

	// EX 7:
	//int number;
	//std::cin >> number;
	//printArrow(number);

	// EX 8:
	//printByConditions();

	// EX 9:
	//int number;n
	//std::cin >> number;
	//printUniqueDivisors(number);

	// EX 10:
	//sumOfEvenIndexes();

	// EX 11:
	//largestAndSmallestNumbers();

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
