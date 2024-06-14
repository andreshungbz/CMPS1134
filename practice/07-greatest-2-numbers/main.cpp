#include <iostream>

int readNumber() {
    std::cout << "Enter value: ";
    int number{};
    std::cin >> number;
    return number;
}

// 7 - Greatest of Two Numbers
int main() {
    std::cout << "Enter values of A, B: \n";
    int A{readNumber()};
    int B{readNumber()};

    if (A > B) {
        std::cout << "A is Larger\n";
    } else {
        std::cout << "B is Larger\n";
    }
    return 0;
}
