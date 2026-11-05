#include <iostream>

int main(){

    double euro;
    double dollar;
    const double rate = 1.12;
    double error = 0.000000001;
    std::cin >> euro >> dollar;

    euro*rate - dollar < error || euro*rate - dollar > error ? std::cout << 1 : std::cout << 0;

return 0;
}