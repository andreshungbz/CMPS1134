#include <iostream>

// 1 - Find Sum of Two Numbers
int main() {
    std::cout << "Enter value of a: ";
    int a{};
    std::cin >> a;

    std::cout << "Enter value of b: ";
    int b{};
    std::cin >> b;

    int c{a + b};
    std::cout << "Sum of given two numbers is: " << c << '\n';
}
