#include <iostream>

int sumOddNumbers(int sum, int count) {
    if (count <= 0) {
        return 0;
    }
    return sum + sumOddNumbers(sum + 2, count - 1);
}

// 18 - Sum of First 50 Odd Numbers
int main() {
    int sum{sumOddNumbers(1, 50)};
    std::cout << "Sum of 1st 50 odd numbers is: " << sum << '\n';
    return 0;
}
