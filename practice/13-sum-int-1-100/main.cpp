#include <iostream>

// 13 - Calculating Sum of Integers 1 to 100
int main() {
    int i{};
    int sum{0};
    for (i = {1}; i < 101; i++) {
        sum += {i};
    }
    std::cout << "Sum of integers from 1 to 100 is: " << sum << '\n';
    return 0;
}
