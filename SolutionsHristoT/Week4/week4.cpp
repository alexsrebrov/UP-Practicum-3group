#include <iostream>


int finder(int n, int i1, int j1) { //Task12 it does not work.
    int number = 1;
    int i = 1, j = 1;
    int uborderI = n, uborderJ = n;
    int lborderI = 1, lborderJ = 1;

    while(i != i1 || j != j1 || number <= n*n) {

        if (j > lborderJ && j < uborderJ && i == lborderI){
            j++;
            if (j == uborderJ)uborderJ--;
        }
        else if (j == uborderJ && i > lborderI && i < uborderI) {
            i++;
            if (i == uborderI)uborderI--;
        }
        else if (j > lborderJ && j < uborderJ && i == uborderI){
            j--;
            if (j == lborderJ)lborderJ++;
        }
        else if (j == lborderJ && i > lborderI && i < uborderI){
            i--;
            if (i == lborderI)lborderI++;
        }
        number++;
        std::cout << number << " " << i << j << "  ";
    }

    return number;
}


int main(){

    //Task1

    // int n;
    // std:: cin >> n;
    // long long factoriel = 1;
    // for (int i = 2; i <= n; i++)
    //     factoriel *= i;
    // std::cout << factoriel;

    //Task2 Shitty version
    // int n1 = 1, n2 = 1, n3 = 1;
    // bool is = 1;
    // while (is) {
    //     std::cin >> n1;
    //     if (n1 % 2 == 0 && n2 % 2 == 0 && n3 % 2 == 0){
    //         is = 0;
    //     }
    //     n3 = n2;
    //     n2 = n1;
    // }

    // Task2 Counter
     // int counter = 0;
     // while (counter < 3) {
     //     int n;
     //     std::cin >> n;
     //     if (n % 2 == 0)counter++;
     //     else counter = 0;
     // }

    //Task3
    // int n;
    // std::cin >> n;
    // if (n == 2) {
    //     std::cout << "true";
    //     return 0;
    // }
    // else if (n % 2 == 0 || n <= 2) {
    //     std::cout << "false";
    //     return 0;
    // }
    // for (int i = 3; i*i <= n; i += 2) {
    //     if (n % i == 0){
    //         std::cout << "false";
    //         return 0;
    //     }
    // }
    // std::cout << "true";

    //Task4
    // int n1 = 1, n2 = 1; //number1 and number2
    // int position;
    // std::cin >> position;
    // for (int i = 2; i <= position; i++) {
    //     n2 += n1;
    //     n1 = n2 - n1;
    // }
    // std::cout << n1;

    //Task5
    // int n, sum = 0;
    // std::cin >> n;
    // do {
    //     sum += n % 10;
    //     n /= 10;
    // }while (n >= 1);
    //
    // std::cout << sum;


    //Task6
    // int n;
    // int counter = 0;
    // std::cin >> n;
    //
    // while (n >= 1){
    //     counter++;
    //     n /= 10;
    // }
    // std::cout << counter;


    //Task7
    // int n;
    // std::cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         std::cout << j << " ";
    //     }
    //     std::cout << std::endl;
    // }
    // for (int i = n-1; i > 0; i--) {
    //     for (int j = 1; j <= i; j++) {
    //         std::cout << j << " ";
    //     }
    //     std::cout << std::endl;
    // }

    //Task8
    // int number = 1011; //the smallest integer which fits the criteria
    // int p1 = 1, p2 = 0, p3 = 1; //position 1, position 2...
    // while (number <= 7299){ //the biggest integer which fits the description is 7299(i think)
    //     std::cout << number << " ";
    //     if (p3 < 9)p3 += 2;
    //     else if (p1 + p2 <= 8)p2++;
    //     else {
    //         p1 += 2;
    //         p2 = 0;
    //     }
    //     number = p1*1000 + p2*100 + p3*10 + (p1+p2);
    //
    // }

    //Task9
    // int n;
    // std::cin >> n;
    // for (int i = 1; i*i <= n; i++) {
    //     if (n % i == 0) {
    //         std::cout << i << " " << n/i << std::endl;
    //     }
    // }
    //Това получавам аз при изхода и мисля, че е вярно.
// 360
// 1 360
// 2 180
// 3 120
// 4 90
// 5 72
// 6 60
// 8 45
// 9 40
// 10 36
// 12 30
// 15 24
// 18 20

    //Task10
    // int n1, n2; //number1 and number2
    // int counter = 0;
    // std::cin >> n1;
    // int sum = n1;
    // do {
    //     if (n2 % 5 != 0)counter++;
    //     std::cin >> n2;
    //     if (counter % 2 == 0 && n2 % 5 != 0)sum += n2;
    //     if (n1 + 1 == n2)break;
    //     else n1 = n2;
    // }while (1);
    // std::cout  << sum;
    // //Получавам рачличен на изход на примерния вход, който е даден, но не знам каква би била грешката ми.
    // //Ще съм благодарен, ако ми кажете!

    //Task11
    // int n;
    // std::cin >> n;
    // int number;
    // if (n >= 1) {
    //     std::cin >> number;
    // }
    // int max = number, min = number;
    //
    // for (int i = 0; i < n - 1; i++) {
    //     std::cin >> number;
    //     if (number > max)max = number;
    //     if (number < min)min = number;
    // }
    // std::cout << "Min: " << min << " Max: " << max;

    //Task12
    int n, i1, j1;
    std::cin >> n;
    std::cin >> i1 >> j1;
    // for (int i = 1; i <= n; i++) { //редове
    //     for (int j = 1; j <= n; j++) { //колони
    //
    //     }
    // }
    std::cout<< finder(n, i1, j1);



        // 1  2  3  4
        // 12 13 14 5
        // 11 16 15 6
        // 10 9  8  7

    return 0;
}
