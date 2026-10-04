#include <iostream>

int main() {
    for (int number = 1; number <= 20; number++) {
        if (number % 2 == 0) {
            std::cout << number << "\n";
        }
    }
}