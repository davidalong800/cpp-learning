#include <iostream>

int main() {
    int number;

    std::cout << "Введите число: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "Число положительное\n";
    } else if (number < 0) {
        std::cout << "Число отрицательное\n";
    } else {
        std::cout << "Число равно нулю\n";
    }

    return 0;
}