// zadachi(1).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//TASK 1
		/*int n, factorial=1;
		std::cin >> n;

		while (n > 0) {
			factorial *= n;
			n--;
		}

		std::cout << factorial;*/

	//TASK 2
		/*int counter=0,num;

		do {
			std::cin >> num;
			if (num % 2 == 0)
				counter++;
			else
				counter = 0;
		} while (counter <= 2);*/

	//TASK 3
	
		/*int n,currNum=2;
		bool isPrime = 1;
		std::cin >> n;
		if (n > 0) {
			while (currNum < n) {
				if (n % currNum == 0) {
					isPrime = 0;
					break;
				}
				currNum++;
			}
			if (isPrime)
				std::cout << "The number is prime";
			else std::cout << "The number is NOT prime";
		}
		else std::cout << "Enter a natural number";*/
		
	//TASK 4
		//int n;
		//std::cin >> n;
		//if (n >= 0) {
		//	if (n == 0)
		//		std::cout << 0;
		//	else if (n == 1 || n == 2)
		//		std::cout << 1;
		//	else {

		//	}
		//}
		//else std::cout << "Enter a natural numseconder";
		
	//TASK 5
		/*int n, sum=0;
		std::cin >> n;

		while (n > 0) {
			sum += n % 10;
			n /= 10;
		}
		std::cout << sum;*/
	 
	//TASK 6
		/*int n, counter=0;
		std::cin >> n;

		while (n != 0) {
			counter++;
			n /= 10;
		}
		std::cout << counter;*/

	//TASK 7
		/*int n;
		std::cin >> n;

		for (size_t i = 1; i <=n ; i++)
		{
			for (size_t j = 1; j <= i; j++)
			{
				std::cout << j << " ";
			}
			std::cout << std::endl;
		}
		for (int i = n - 1; i > 0; i--)
		{
			for (size_t j = 1; j <= i; j++)
			{
				std::cout << j << " ";
			}
			std::cout << std::endl;
		}*/

	//TASK 8
		/*int first, second, third, forth;
		for (int i = 1000; i <= 9999; i++) {
			first = i / 1000;
			second = i / 100 % 10;
			third = i / 10 % 10;
			forth = i % 10;

			if (first % 2 != 0 && third % 2 != 0 && (first + second == forth))
				std::cout << i<<std::endl;
		}*/
	//TASK 9
		/*int n;
		std::cin >> n;
		
		for (int i = 1; i * i <= n; i++) {
			if (n % i == 0) std::cout << i << " " << n / i<<std::endl;
		}*/

	//TASK 10
		/*int currN = 0, lastN = -1, index = -1, sum = 0;
		do {
			if (currN) {
				lastN = currN;
			}
			std::cin >> currN;
			if (currN % 5 != 0) {
				index++;
				if (index % 2 == 0)
					sum += currN;
			}
		} while (currN != lastN);

		std::cout << sum;*/

	//TASK 11
		/*int n, currNum, maxNum, minNum;
		std::cin >> n;
		std::cin >> currNum;

		maxNum = currNum;
		minNum = currNum;

		for (int i = 2; i <= n; i++) {
			std::cin >> currNum;
			if (currNum > maxNum) maxNum = currNum;
			if (currNum < minNum) minNum = currNum;
		}

		std::cout << maxNum << std::endl << minNum;*/

	//TASK 12
		int n;
		std::cin >> n;

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {

			}
		}
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
