#include <iostream>

int sumSQNNUmbers(int number) {
    if (number <= 0) {
        return 0;
    }
    return (number * number) + sumSQNNUmbers(number - 1);
}

// 15 - Sum of Squares of N Natural Numbers
int main() {
    std::cout << "Enter the value of n: ";
    int n{};
    std::cin >> n;

    int sum{sumSQNNUmbers(n)};
    std::cout << "Sum of square of integers up to n is: " << sum << '\n';
    return 0;
}
