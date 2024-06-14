#include <iostream>

int readNumber() {
    std::cout << "Enter value: ";
    int number{};
    std::cin >> number;
    return number;
}

// 6 - Calculating The Average for 3 Numbers
int main() {
    std::cout << "Enter values of A, B, C: \n";
    int A{readNumber()};
    int B{readNumber()};
    int C{readNumber()};

    double Average{(A + B + C)/3.0};
    std::cout << "Average of given 3 numbers is: " << Average << '\n';
    return 0;
}
