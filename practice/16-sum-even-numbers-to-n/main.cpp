#include <iostream>

int sumEvenNumbers(int number, bool isEven) {
    if (number <= 0) {
        return 0;
    }
    if (isEven) {
        return number + sumEvenNumbers(number - 2, true);
    } else {
        return number - 1 + sumEvenNumbers(number - 2, false);
    }
}

// 16 - Find the Sum of All Even Numbers up to N
int main() {
    std::cout << "Enter value of n: ";
    int n{};
    std::cin >> n;

    bool isEven{n % 2 == 0};

    int sum{sumEvenNumbers(n, isEven)};
    std::cout << "Sum of even numbers up to n is: " << sum << '\n';
    return 0;
}
