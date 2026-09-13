#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "Как тебя зовут? ";
    std::cin >> name;
    
    std::cout << "Сколько тебе лет? ";
    std::cin >> age;

    std::cout << "Привет, " << name << "! Тебе " << age << " лет.\n";
    std::cout << "Через 10 лет тебе будет " << age + 10 << ".\n";

    return 0;
}