#include <iostream>

int sumNNumbers(int number) {
    if (number <= 0) {
        return 0;
    }
    return number + sumNNumbers(number - 1);
}

// 14 - Find the Sum of N Natural Numbers
int main() {
    std::cout << "Enter value of n: ";
    int n{};
    std::cin >> n;

    int sum{sumNNumbers(n)};
    std::cout << "Sum of n natural numbers is: " << sum << '\n';
    return 0;
}
