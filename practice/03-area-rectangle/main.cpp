#include <iostream>

// 3 - Finding Area of The Rectangle
int main() {
    std::cout << "Enter side length a: ";
    int a{};
    std::cin >> a;

    std::cout << "Enter side length b: ";
    int b{};
    std::cin >> b;

    int area{a * b};
    std::cout << "Area of rectangle is: " << area << '\n';
    return 0;
}
