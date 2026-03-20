#include <iostream>
#include <string>

int main() {
    std::string name;                     // переменная для имени пользователя
    std::cout << "Enter your name: ";     // запрос имени
    std::cin >> name;                     // ввод имени
    std::cout << "Hello world from " << name << std::endl; // приветствие
    return 0;
}
