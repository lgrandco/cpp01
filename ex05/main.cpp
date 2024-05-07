#include "Harl.hpp"

int main(int ac, char** av) {
    Harl harl;

    std::cout << "\nDefault levels:" << std::endl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    std::cout << std::endl;

    if (ac > 1) {
        std::cout << "Level(s) asked:" << std::endl;
        for (int i = 1; i < ac; i++) harl.complain(av[1]);
        std::cout << std::endl;
    }
};
