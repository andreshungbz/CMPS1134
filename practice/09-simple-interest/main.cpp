#include <iostream>

int readNumber() {
    std::cout << "Enter value: ";
    int number{};
    std::cin >> number;
    return number;
}

// 9 - Calculate Simple Interest
int main() {
    std::cout << "Enter values of P, N, R: \n";
    int P{readNumber()}; // principal
    int N{readNumber()}; // number of years
    int R{readNumber()}; // rate of interest

    double SI{P * N * R / 100.0};
    std::cout << "Simple interest is: " << SI << '\n';
    return 0;
}
