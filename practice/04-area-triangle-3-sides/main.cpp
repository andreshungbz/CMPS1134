#include <iostream>
#include <cmath>

int readNumber() {
    std::cout << "Enter value: ";
    int number{};
    std::cin >> number;
    return number;
}

// 4 - Area of Triangle with 3 Sides Given
int main() {
    std::cout << "Enter values of a, b, c: \n";
    int a{readNumber()};
    int b{readNumber()};
    int c{readNumber()};

    double s = (a + b + c)/2.0; // semi-perimeter of triangle
    double A = std::sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula

    std::cout << "Area of Triangle is: " << A << '\n';
    return 0;
}
