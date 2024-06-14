#include <iostream>

// 2 - Finding Area of The Square
int main() {
    std::cout << "Enter length of square L: ";
    int L{};
    std::cin >> L;

    int area{L * L};
    std::cout << "Area of square is: " << area << '\n';
    return 0;
}
