// 7-hotel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int guests;
	std::cin >> guests;

	//Nachin 1
	std::cout << "Rooms for 1: " << (((guests % 10) % 7) % 5) % 2 << std::endl<<
		"Rooms for 2: " << (((guests % 10) % 7) % 5) / 2 << std::endl <<
		"Rooms for 5: " << ((guests % 10) % 7) / 5 << std::endl <<
		"Rooms for 7: " << (guests % 10) / 7 << std::endl <<
		"Rooms for 10: " << guests / 10;


	//Nachin 2

	/*int roomsFor1, roomsFor2, roomsFor5, roomsFor7, roomsFor10;

	roomsFor10 = guests / 10;
	guests %= 10;
	roomsFor7 = guests / 7;
	guests %= 7;
	roomsFor5 = guests /5;
	guests %= 5;
	roomsFor2 = guests / 2;
	roomsFor1 = guests % 2;

	std::cout << "Rooms for 1: " << roomsFor1 << std::endl <<
		"Rooms for 2: " << roomsFor2 << std::endl <<
		"Rooms for 5: " << roomsFor5 << std::endl <<
		"Rooms for 7: " << roomsFor7 << std::endl <<
		"Rooms for 10: " << roomsFor10;*/

	
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
