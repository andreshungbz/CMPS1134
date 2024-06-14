#include <iostream>

// 10 - Convert Temperature from Fahrenheit to Celsius
int main() {
    std::cout << "Enter Fahrenheit: ";
    double F{};
    std::cin >> F;

    double C{(F - 32) * 5.0 / 9.0};
    std::cout << "Temperature in Celsius is: " << C << '\n';
    return 0;
}
