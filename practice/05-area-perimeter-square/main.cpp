#include <iostream>

// 5 - Find the Area & Perimeter of a Square
int main() {
    std::cout << "Enter length of a square L: ";
    int L{};
    std::cin >> L;

    int A = L * L;
    int P = L * 4;

    std::cout << "Area = " << A << '\n';
    std::cout << "Perimeter = " << P << '\n';
    return 0;
}
