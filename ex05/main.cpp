#include "Harl.hpp"

int main(int ac, char** av) {
    Harl harl;

    std::cout << "\nDefault levels:" << std::endl;
    std::cout << "DEBUG : ";
    harl.complain("DEBUG");
    std::cout << "INFO : ";
    harl.complain("INFO");
    std::cout << "WARNING : ";
    harl.complain("WARNING");
    std::cout << "ERROR : ";
    harl.complain("ERROR");
    std::cout << std::endl;

    if (ac > 1) {
        std::cout << "Level(s) asked:" << std::endl;
        for (int i = 1; i < ac; i++) harl.complain(av[i]);
        std::cout << std::endl;
    }
};
