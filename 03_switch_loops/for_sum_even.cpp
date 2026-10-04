#include <iostream>

int main() {
    int sum = 0;
    for (int number = 1; number <= 20; number++) {
        if (number % 2 == 0) {
            sum += number;
        }
    }
    std::cout << "Сумма: " << sum << "\n";
}