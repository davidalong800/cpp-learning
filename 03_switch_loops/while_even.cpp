#include <iostream>

int main() {
    int number = 1;

    while (number <= 20) {
        if (number % 2 == 0) {
            std::cout << number << "\n";
        }
        number++;
    }
}