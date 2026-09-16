#include <iostream>

int main() {
    int number;

    std::cout << "Введите число: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << "Чётное\n";
    } else {
        std::cout << "Нечётное\n";
    }

    return 0;
}