#include <iostream>

int main() {
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    switch (number)
    {
    case 1:
        std::cout << "Start\n";
        break;
    
    case 2:
        std::cout << "Settings\n";
        break;
    
    case 3:
        std::cout << "Exit\n";
        break;

    default:
        std::cout << "Unknown\n";
        break;
    }
}