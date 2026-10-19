#include <iostream>

int main() {
    int broi_gosti;
    std::cin >> broi_gosti;

    int staq1 = 0;
    int staq2 = 0;
    int staq3 = 0;
    int staq4 = 0;
    int staq5 = 0;

    int ostavashti = broi_gosti;

    while (ostavashti > 0) {
        if (ostavashti >= 10) {
            staq5++;
            ostavashti -= 10;
        }
        else if (ostavashti >= 7) {
            staq4++;
            ostavashti -= 7;
        }
        else if (ostavashti >= 5) {
            staq3++;
            ostavashti -= 5;
        }
        else if (ostavashti >= 2) {
            staq2++;
            ostavashti -= 2;
        }
        else if (ostavashti >= 1) {
            staq1++;
            ostavashti -= 1;
        }
    }

    std::cout << "Rooms for 1: " << staq1 << std::endl;
    std::cout << "Rooms for 2: " << staq2 << std::endl;
    std::cout << "Rooms for 5: " << staq3 << std::endl;
    std::cout << "Rooms for 7: " << staq4 << std::endl;
    std::cout << "Rooms for 10: " << staq5 << std::endl;

    return 0;

}