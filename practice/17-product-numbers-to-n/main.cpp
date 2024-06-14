#include <iostream>

int prodNumbers(int number) {
    if (number <= 0) {
        return 1;
    }
    return number * prodNumbers(number - 1);
}

// 17 - Find Product of Numbers up to N
int main() {
    std::cout << "Enter value of n: ";
    int n{};
    std::cin >> n;

    int prod{prodNumbers(n)};
    std::cout << "Product of numbers up to n is: " << prod << '\n';
    return 0;
}
