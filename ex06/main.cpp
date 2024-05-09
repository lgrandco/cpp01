#include "Harl.hpp"

int main(int ac, char** av) {
    if (ac != 2) {
        std::cout << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return 1;
    }
    Harl harl;
    HashMap<size_t> map_index;
    map_index.insert("DEBUG", 1);
    map_index.insert("INFO", 2);
    map_index.insert("WARNING", 3);
    map_index.insert("ERROR", 4);

    size_t index = map_index.get_value(av[1]);
    std::cout << std::endl;
    switch (index) {
        default: std::cout << "non-existent level: " << av[1] << "\n" << std::endl; break;
        case 1:
            std::cout << "[ DEBUG ]" << std::endl;
            harl.complain("DEBUG");
            std::cout << std::endl;
        case 2:
            std::cout << "[ INFO ]" << std::endl;
            harl.complain("INFO");
            std::cout << std::endl;
        case 3:
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("WARNING");
            std::cout << std::endl;
        case 4:
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("ERROR");
            std::cout << std::endl;
    }
};
