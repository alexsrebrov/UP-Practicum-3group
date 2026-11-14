// solutions-week-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const int SIZE_ARR = 10;

// EX 1:
void readArray(int arr1[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr1[i] << " ";
	}
}

void sumArray(int arr1[], int arr2[], int res[], int size)
{
	for (int i = 0; i < size; i++)
	{
		res[i] = arr1[i] + arr2[i];
	}
}

void prodArray(int arr1[], int arr2[], int res[], int size)
{
	for (int i = 0; i < size; i++)
	{
		res[i] = arr1[i] * arr2[i];
	}
}

// EX 2: копира се само от и в масиви със еднакви дължини
void copyFromArrToNewArr(int toCopy[], int copy[], int size)
{
	for (int i = 0; i < size; i++)
	{
		copy[i] = toCopy[i];
	}
}

// EX 3:
int findNumber(int arr[], int size, int numToFind)
{
	for (int i = 0; i < size; i++)
	{
		if (numToFind == arr[i])
		{
			return i;
		}
	}

	return -1;
}

// EX 4:
void minAndMaxElements(int arr[], int size)
{
	int min = arr[0];
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}

	std::cout << "Min element: " << min << std::endl;
	std::cout << "Max element: " << max << std::endl;
}

// EX 5:
bool compareTwoArrays(int arr1[], int arr2[], int size1, int size2)
{
	if (size1 > size2) return false;
	else if (size2 > size1) return false;

	for (int i = 0; i < size1; i++)
	{
		if (arr1[i] != arr2[i]) return false;
	}

	return true;
}

// EX 6:
void concat(int arr1[], int arr2[], int res[], int size1, int size2)
{
	int resSize = size1 + size2;
	int resIndex = size1;
	for (int i = 0; i < size1; i++)
	{
		res[i] = arr1[i];
	}
	for (int i = 0; i < size2; i++, resIndex++)
	{
		res[resIndex] = arr2[i];
	}
}

// EX 7:
void remove(int arr[], int size, int numToRemove)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != numToRemove) std::cout << arr[i] << " ";
	}
}

// EX 8:
void remove(char arr[], int size, char charToRemove)
{
	for (int i = 0; i < size; i++)
	{
		int result = charToRemove - arr[i];
		if (result != 32 && result != 0) std::cout << arr[i] << " ";
	}
}

// EX 9:
int enterArray(double grades[])
{
	double elemnt = 0;
	for (int i = 0; i < 26; i++)
	{
		std::cin >> grades[i];
		if (grades[i] < 2 || grades[i] > 6)
		{
			return -1;
		}
	}

	return 0;
}

double averageGrade(double grades[])
{
	double sum = 0;
	for (int i = 0; i < 26; i++)
	{
		sum += grades[i];
	}
	return sum / 26;
}

int countOfMoreThanAverageGrade(double grades[], double avgGrade)
{
	int count = 0;
	for (int i = 0; i < 26; i++)
	{
		if (grades[i] >= avgGrade) count++;
	}

	return count;
}

// EX 10:
void concat(int arr1[], int arr2[], int res[])
{
	int resIndex = 10;
	int newSize = 10 * 2;
	for (int i = 0; i < 10; i++)
	{
		res[i] = arr1[i];
	}
	for (int i = 0; i < 10; i++, resIndex++)
	{
		res[resIndex] = arr2[i];
	}
}

void sortAscending(int res[])
{
	int swap = 0;
	for (int i = 0; i < 20 - 1; i++)
	{
		for (int j = 0; j < 20 - i - 1; j++)
		{
			if (res[j] > res[j + 1])
			{
				swap = res[j];
				res[j + 1] = res[j];
				res[j + 1] = swap;
			}
		}
	}
}

// EX 11:
int countFreeSpaces(int parking[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (parking[i] == 0) count++;
	}

	return count;
}

int findFreeSpace(int parking[], int size, int required)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (parking[i] == 0)
		{
			count++;
			if (count == required) return i - count + 1;
		}
		else count = 0;
	}

	return -1;
}

void park(int parking[], int size, int space, int required)
{
	for (int i = space; i < space + required; i++)
	{
		parking[i] = 1;
	}
}

void exit(int parking[], int size, int space)
{

}

int main()
{
	// EX 1:
	//int arr1[SIZE_ARR] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int arr2[SIZE_ARR] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	//int res[SIZE_ARR];
	//std::cout << "Read array 1: ";
	//readArray(arr1, SIZE_ARR);
	//std::cout << std::endl;
	//std::cout << "Read array 2: ";
	//readArray(arr2, SIZE_ARR);
	//std::cout << std::endl;
	//std::cout << "Sum of two arrays: ";
	//sumArray(arr1, arr2, res, SIZE_ARR);
	//readArray(res, SIZE_ARR);
	//std::cout << std::endl;
	//std::cout << "Product of two arrays: ";
	//prodArray(arr1, arr2, res, SIZE_ARR);
	//readArray(res, SIZE_ARR);

	// EX 2:
	//int oldArr[SIZE_ARR] = { 1,2,3,4,5,6,7,8,9,10 };
	//int newArr[SIZE_ARR];
	//std::cout << "Coppied array: " << std::endl;
	//copyFromArrToNewArr(oldArr, newArr, SIZE_ARR);
	//readArray(newArr, SIZE_ARR);

	// EX 3:
	//int numToFind;
	//std::cin >> numToFind;
	//int arr[SIZE_ARR] = { 1, 13, 34, 1, -876, 33, 61, 0, -12, 88 };
	//int result = findNumber(arr, SIZE_ARR, numToFind);
	//if (result == -1) std::cout << "Not found!" << std::endl;
	//else std::cout << "Index of number: " << result << std::endl;

	// EX 4:
	//int arr[SIZE_ARR] = { 1, 13, 34, 1, -876, 33, 61, 0, -12, 88 };
	//minAndMaxElements(arr, SIZE_ARR);

	// EX 5:
	//const int SIZE_ARR1 = 5;
	//const int SIZE_ARR2 = 5;
	//int arr1[SIZE_ARR2] = { 1,2,3,4,5 };
	//int arr2[SIZE_ARR1] = { 1,2,3,4,5 };
	//std::cout << (compareTwoArrays(arr1, arr2, SIZE_ARR1, SIZE_ARR2) == true ? "Equal" : "Not equal!") << std::endl;

	// EX 6:
	//const int SIZE_ARR1 = 5;
	//const int SIZE_ARR2 = 7;
	//int arr1[SIZE_ARR1] = { 1,2,3,4,5 };
	//int arr2[SIZE_ARR2] = { 1,2,3,4,5,6,7 };
	//int res[SIZE_ARR1 + SIZE_ARR2];
	//std::cout << "New array: " << std::endl;
	//concat(arr1, arr2, res, SIZE_ARR1, SIZE_ARR2);
	//readArray(res, SIZE_ARR1 + SIZE_ARR2);

	// EX 7:
	//int number;
	//std::cin >> number;
	//int arr[SIZE_ARR] = { 1,2,3,4,3,6,7,3,3,10 };
	//std::cout << "New array: ";
	//remove(arr, SIZE_ARR, number);

	// EX 8:
	//char charToRemove;
	//std::cin >> charToRemove;
	//char arr[SIZE_ARR] = { 'a', 'B', 'c', 'D', 'E', 'f', 'g', 'h', 'H', 'A' };
	//remove(arr, SIZE_ARR, charToRemove);

	// EX 9:
	//2.15, 5.92, 3.04, 4.88, 2.33, 5.67,
	//3.99, 4.12, 6.00, 2.75, 5.43, 3.21,
	//4.65, 2.05, 5.81, 3.50, 4.44, 2.90,
	//5.10, 3.78, 4.22, 5.99, 2.45, 3.11,
	//4.95, 2.60
	//std::cout << "Enter 26 grades: ";
	//double grades[26];
	//int result = enterArray(grades);
	//if (result == -1)
	//{
	//	std::cout << "The grades have to be between [2.00 ; 6.00]!" << std::endl;
	//	return 0;
	//}
	//double avgGrade = averageGrade(grades);
	//std::cout << "Average grade: " << avgGrade << std::endl;
	//std::cout << "Count of students with more than average: " << countOfMoreThanAverageGrade(grades, avgGrade);

	// EX 10:
	//int arr1[SIZE_ARR] = { 1,2,3,4,5,6,7,8,9,10 };
	//int arr2[SIZE_ARR] = { 11,12,13,14,15,16,17,18,19,20 };
	//int res[SIZE_ARR * 2];
	//concat(arr1, arr2, res);
	//std::cout << "Unsorted concatenated array: " << std::endl;
	//readArray(res, 20);
	//std::cout << std::endl;
	//std::cout << "Sorted concatenated array: " << std::endl;
	//sortAscending(res);
	//readArray(res, 20);

	// EX 11:
	int space = 0, result = 0, required = 0;
	int parking[100] = {
		1, 0, 1, 1, 0, 0, 1, 0, 1, 1,
		0, 1, 0, 0, 1, 1, 1, 0, 0, 1,
		1, 0, 1, 0, 0, 1, 1, 0, 1, 0,
		0, 1, 1, 0, 1, 0, 0, 1, 1, 0,
		1, 0, 0, 1, 1, 0, 1, 1, 0, 0,
		0, 1, 1, 0, 1, 0, 1, 1, 0, 1,
		1, 0, 0, 1, 0, 1, 1, 0, 0, 1,
		0, 1, 1, 0, 1, 1, 0, 0, 1, 0,
		1, 0, 1, 1, 0, 1, 0, 0, 1, 1,
		0, 1, 0, 0, 1, 1, 0, 1, 0, 1
	};
	std::cout << "Enter the corresponding number of a command:" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "1. Count of free spaces" << std::endl;
	std::cout << "2. Find free space" << std::endl;
	std::cout << "3. Park" << std::endl;
	std::cout << "4. Exit" << std::endl;
	std::cout << "5. Stop Program." << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	int command;
	std::cin >> command;
	while (command != 5)
	{
		switch (command)
		{
		case 1:
			std::cout << "--------------------------------------------" << std::endl;
			std::cout << "Count of Free spaces: " << countFreeSpaces(parking, 100) << std::endl;
			std::cout << "--------------------------------------------" << std::endl;
			break;
		case 2:
			std::cout << "--------------------------------------------" << std::endl;
			std::cout << "Enter required spaces: ";
			std::cin >> required;
			space = findFreeSpace(parking, 100, required);
			if (space == -1)
			{
				std::cout << "There are no such free spaces in a row!" << std::endl;
				std::cout << "--------------------------------------------" << std::endl;
				break;
			}
			std::cout << "Free space starts at " << space  << "." << std::endl;
			std::cout << "--------------------------------------------" << std::endl;
			break;
		case 3:
			std::cout << "Enter required spaces: ";
			std::cin >> required;
			space = findFreeSpace(parking, 100, required);
			if (space == -1)
			{
				std::cout << "There are no such free spaces in a row!" << std::endl;
				std::cout << "--------------------------------------------" << std::endl;
				break;
			}
			park(parking, 100, space, required);
			std::cout << "Parked " << required << " spaces from spot " << space << std::endl;
			std::cout << "--------------------------------------------" << std::endl;
			break;
		case 4:
			// ATP не знам вече как хахахахахха
			break;
		default:
			break;
		}
		std::cout << "Enter the corresponding number of a command:" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "1. Count of free spaces" << std::endl;
		std::cout << "2. Find free space" << std::endl;
		std::cout << "3. Park" << std::endl;
		std::cout << "4. Exit" << std::endl;
		std::cout << "5. Stop Program." << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		std::cin >> command;
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
