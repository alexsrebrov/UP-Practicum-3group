#include <iostream>
#include <cmath>

using namespace std;

string firstEx()
{
	int number;

	cout << "Write a number whole number: \n";
	cin >> number;

	return ((number % 2 == 0) ? "Your number is even" : "Your number is odd");
}

void secondEx()
{
	int number;
	cout << "Write a 4 digit number: \n";

	cin >> number;

	cout << number % 10;
	number /= 10;
	cout << number % 10;
	number /= 10;
	cout << number % 10;
	number /= 10;
	cout << number % 10;
	number /= 10;
}

void thirdEx()
{
	char letter;
	cout << "Write a letter (upper case/lower case) from the English alphabet: \n";

	cin >> letter;

	bool isUppercase = letter >= 65 && letter <= 90;

	int position;

	isUppercase ? position = letter - 64 : position = letter - 96;

	cout << letter << ' ' << position << ", " << isUppercase;
}

string fourthEx()
{
	const double exchangeRate = 1.12;

	double epsilon = 1e-9;

	double firstNumber;
	double secondNumber;
	cout << "Write two decimal numbers on separate lines: \n";

	cin >> firstNumber;
	cin >> secondNumber;

	double exchanged = firstNumber * exchangeRate;
	double difference = exchanged - secondNumber;

	return ((difference < epsilon && difference > -epsilon) ? "The prices are the same" : "They are different prices");
}

void fifthEx()
{
	int firstNumber;
	int secondNumber;
	cout << "Write two whole numbers on separate lines int the interval [5, 93456]: \n";

	cin >> firstNumber;
	cin >> secondNumber;

	bool areValid = !(firstNumber >= 5 && firstNumber <= 93456) || !(secondNumber >= 5 && secondNumber <= 93456);

	cout << areValid << "\n";

	/*Не разбрах дали ако някое от числата е навилдно дали трябва да прекратявам операцията и да не смятам
	и съответно функцията трябва да връща string и резултатът да се каства към sting
	if (areValid)
	{
		cout << "The numbers are valid";
	}
	else
	{
		return "The numbers are invalid";
	}*/

	//Не удобрявам ;-; ама не може да ползваме вградени функции
	int calculation =
		((firstNumber + secondNumber) * (firstNumber + secondNumber) * (firstNumber + secondNumber))
		+ ((firstNumber - secondNumber) * (firstNumber - secondNumber))
		- ((firstNumber + secondNumber) * (firstNumber + secondNumber) * (firstNumber + secondNumber) * (firstNumber + secondNumber));

	cout << calculation;
}

void sixthEx()
{
	int firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit, sixthDigit;
	char firstInput, secondInput, thirdInput, fourthInput, fifthInput, sixthInput;
	cout << "Write six separate digits (single one line): \n";

	cin >> firstInput;
	cin >> secondInput;
	cin >> thirdInput;
	cin >> fourthInput;
	cin >> fifthInput;
	cin >> sixthInput;

	firstDigit = firstInput - 48;
	secondDigit = secondInput - 48;
	thirdDigit = thirdInput - 48;
	fourthDigit = fourthInput - 48;
	fifthDigit = fifthInput - 48;
	sixthDigit = sixthInput - 48;

	int firstNumber = firstDigit * 100 + secondDigit * 10 + thirdDigit;
	int secondNumber = fourthDigit * 100 + fifthDigit * 10 + sixthDigit;

	int sum = firstNumber + secondNumber;

	cout << sum / 10;
}

void seventhEx()
{
	int guests;
	cout << "Write a whole number that represents the number of guests in the hotel: \n";

	cin >> guests;

	int roomsForTen = 0;
	int roomsForSeven = 0;
	int roomsForFive = 0;
	int roomsForTwo = 0;
	int roomsForOne = 0;

#pragma region Ternary operations
	(guests >= 10)
		? roomsForTen = guests / 10
		: 0;
	guests -= roomsForTen * 10;

	(guests >= 7)
		? roomsForSeven = guests / 7
		: 0;
	guests -= roomsForSeven * 7;

	(guests >= 5)
		? roomsForFive = guests / 5
		: 0;
	guests -= roomsForFive * 5;

	(guests >= 2)
		? roomsForTwo = guests / 2
		: 0;
	guests -= roomsForTwo * 2;

	(guests >= 1)
		? roomsForOne = guests
		: 0;
	guests -= roomsForOne;
#pragma endregion

	cout << "Rooms for 1: " << roomsForOne << "\n";
	cout << "Rooms for 2: " << roomsForTwo << "\n";
	cout << "Rooms for 5: " << roomsForFive << "\n";
	cout << "Rooms for 7: " << roomsForSeven << "\n";
	cout << "Rooms for 10: " << roomsForTen << "\n";
}

int main()
{
	/*Ex.1
	string result = firstEx();
	cout << result;*/

	/*Ex.2
	secondEx();*/

	/*Ex.3
	thirdEx();*/

	/*Ex.4
	string result = fourthEx();
	cout << result;*/

	/*Ex.5
	fifthEx();*/

	/*Ex.6
	sixthEx();*/

	/*Ex.7
	seventhEx();*/
}