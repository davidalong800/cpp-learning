#include <iostream>
#include <string>

int main() {
    std::string color;

    std::cout << "Выберите цвет - red, yellow, green: ";
    std::cin >> color;

    if (color == "red") {
        std::cout << "Стой\n";
    } else if (color == "yellow") {
        std::cout << "Приготовься\n";
    } else if (color == "green") {
        std::cout << "Иди\n";
    } else {
        std::cout << "Неизвестный цвет\n";
    }

    return 0;
}