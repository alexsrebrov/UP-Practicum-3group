#include <iostream>

int main()
{
    // Task 1-Chetnost:
    std::cout << "- TASK 1 CHETNOST -\n";
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    int ostatuk = x % 2;
    std::cout << "The result is: " << ostatuk;


    //// Task 2-Obrushtane:
    std::cout << "\n";
    std::cout << "-TASK 2 - OBRUSHTANE -\n";
    std::cout << "Enter a 4-digit number: ";
    int y;
    std::cin >> y;
    int ost4 = y % 10;
    int result4 = y / 10;
    int ost3 = result4 % 10;
    int result3 = result4 / 10;
    int ost2 = result3 % 10;
    int result2 = result3 / 10;
    int ost1 = result2 % 10;
    std::cout << ost4 << ost3 << ost2 << ost1;


    // Task 3 - Azbuka:
    std::cout << "\n";
    std::cout << "-TASK 3 - AZBUKA-\n";
    std::cout << "Enter a letter: ";
    char c;
    std::cin >> c;
    int code = static_cast<unsigned char>(c);
    if (code >= 65 && code <= 90)
    {
        std::cout << "character code: " << code - 64 << ".1";
    }
    else if (code >= 97 && code <= 122)
    {        
        std::cout << "character code: " << code - 96 << ".0";
    }


    // Task 4 - Valuten kurs:
    std::cout << "\n";
    std::cout << "-TASK 4 - VALUTEN KURS -\n";
    std::cout << "Enter 2 amounts, one in euros and the other in dollars:";
    double eur, usd;
    std::cin >> eur >> usd;
    if (eur * 1.12 == usd) {  ;
    std::cout << "1";
    }
    else {
        std::cout << "0";
    }


    // Task 5 - Kalkulator:
    std::cout << "\n";
    std::cout << "-TASK 5 - KALKULATOR -\n";
    std::cout<< "Enter 2 numbers:";
    int a, b;
    std::cin >> a >> b;
    if (a >= 5 && a <= 93456 && b >= 5 && b <= 93456) {
        std::cout << "1\n";
    }
    else { 
        std::cout << "0\n";
        
    }
    int equation = (a + b) * (a + b) * (a + b) + (a - b) * (a - b) - (a + b) * (a + b) * (a + b) * (a + b);
    std::cout << equation;
 

    //// Task 6 - Kalkulator 2.0:
    std::cout << "\n";
    std::cout << "-TASK 6 - KALKULTOR 2.0 -\n";
    std::cout << "Enter two 3-digit numbers: ";
    char c1, c2, c3;
    std::cin >> c1 >> c2 >> c3;
    char c4, c5, c6;
    std::cin >> c4 >> c5 >> c6;
    
    int n1 = (c1 - '0') * 100 + (c2 - '0') * 10 + (c3 - '0');
    int n2 = (c4 - '0') * 100 + (c5 - '0') * 10 + (c6 - '0');
    int suma = (n1 + n2) / 10; 
    std::cout << "sumata e " << suma;


    // Task 7 - Hotel:
    std::cout << "\n";
    std::cout << "-TASK 7 - HOTEL -\n";
    std::cout << "Enter a number of guests:";
    int N;
    std::cin >> N;
    int staq10 = N / 10;
    int ostatukot10 = N % 10;
    int staq7 = ostatukot10 / 7;
    int ostatukot7 = ostatukot10 % 7;
    int staq5 = ostatukot7 / 5;
    int ostatukot5 = ostatukot7 % 5;
    int staq2 = ostatukot5 / 2;
    int ostatukot2 = ostatukot5 % 2;
    int staq1 = ostatukot2 / 1;

    std::cout << "Rooms for 10 people: " << staq10 <<  "\nRooms for 7 people: " << staq7 
        << "\nRooms for 5 people: " << staq5 << "\nRooms for 2 people: " << staq2 << "\nRooms for 1 person: " << staq1;

}
