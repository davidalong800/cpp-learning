#include <iostream>

int main() {
    int count = 0;
    int n;
    std::cout << "Ввод: ";
    std::cin >> n;

    for (int number = 1; number <= n; number++) {
        if (number % 2 != 0) {
            count++;
        }
    }
    std::cout << "Вывод: " << count << "\n";
}