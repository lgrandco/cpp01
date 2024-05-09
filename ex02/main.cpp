#include "colors.hpp"

int main(void) {
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout << ANSI_BOLD;
    std::cout << get_color() << "Memory address of the string variable: " << &string << std::endl;
    std::cout << get_color() << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << get_color() << "Memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << get_color() << "Value of the string variable: " << string << std::endl;
    std::cout << get_color() << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << get_color() << "Value of stringREF: " << stringREF << std::endl;

    std::cout << get_color()
              << "\nChanging the value of the string variable to \"string is now this\"\n"
              << std::endl;
    stringREF = "string is now this";

    std::cout << get_color() << "Memory address of the string variable: " << &string << std::endl;
    std::cout << get_color() << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << get_color() << "Memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << get_color() << "Value of the string variable: " << string << std::endl;
    std::cout << get_color() << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << get_color() << "Value of stringREF: " << stringREF << std::endl;
    std::cout << ANSI_RESET;

    return (0);
}
