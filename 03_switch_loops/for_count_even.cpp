#include <iostream>

int main() {
    int count = 0;

    for (int number = 1; number <= 20; number++) {
        if (number % 2 == 0) {
            count++;
        }
    }
    std::cout << "Количество четных: " << count << "\n";
}