#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "Введите свой возраст: ";
    std::cin >> age;
    std::cin.ignore(10000, '\n');
    std::cout << "Введите имя и фамилию: ";
    std::getline(std::cin, name);
    std::cout << "Привет, " << name << "! Тебе " << age << " лет.\n";

    return 0;
}