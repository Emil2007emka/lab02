#include <iostream>
#include <string>

int main() {
    std::string name;                     // user name variable
    std::cout << "Enter your name: ";     // prompt
    std::cin >> name;                     // read input
    std::cout << "Hello world from " << name << std::endl; // output
    return 0;
}
