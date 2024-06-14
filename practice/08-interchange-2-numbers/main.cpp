#include <iostream>

// 8 - Interchange the Value of Two Numbers
int main() {
    std::cout << "Enter value of a: ";
    int a{};
    std::cin >> a;

    std::cout << "Enter value of b: ";
    int b{};
    std::cin >> b;

    int c{a};
    a = {b};
    b = {c};

    std::cout << "Values of a & b after swapping: \n";
    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    return 0;
}
