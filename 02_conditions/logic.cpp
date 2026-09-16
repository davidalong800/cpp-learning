#include <iostream>

int main() {
    int number;

    std::cout << "Введите число: ";
    std::cin >> number;

    if ((number >= 10 && number <= 20) || number == 100) {
        std::cout << "Да\n";
    } else {
        std::cout << "Нет\n";
    }

    return 0;
}