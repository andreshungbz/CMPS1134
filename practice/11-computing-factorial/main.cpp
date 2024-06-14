#include <iostream>

int factorialize(int number) {
    if (number <= 0) {
        return 1;
    }
    return number * factorialize(number - 1);
}

// 11 - Computing Factorial
int main() {
    std::cout << "Enter value of N: ";
    int N{};
    std::cin >> N;

    int F{factorialize(N)};
    std::cout << "Factorial of N is: " << F << '\n';
    return 0;
}
