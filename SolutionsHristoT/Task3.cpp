#include <iostream>

int main() {
    char letter;

    std::cin >> letter;

    if (letter <= 'Z' and letter >= 'A') {
        std::cout << letter - 'A' + 1 << "," << 1;
    }
    else if(letter <= 122 and letter >= 97){
        std::cout << letter-96 << "," << 0;
    }
    return 0;
}