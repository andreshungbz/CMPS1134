#include <iostream>

// 12 - Find the Sum of First Five Natural Numbers
int main() {
    int count{0};
    int sum{0};
    for (count = {1}; count <= 5; count++) {
        sum += {count};
    }
    std::cout << "Sum of 1st 5 numbers is: " << sum << '\n';
    return 0;
}
