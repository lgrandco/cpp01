#include <fstream>
#include <iostream>
#include <sstream>
#include <stdlib.h>

int main(int ac, char** av) {
    if (ac != 4) {
        std::cout << "Usage: ./ft_sed file oldvalue newvalue" << std::endl;
        return EXIT_FAILURE;
    }
    if (!*av[2]) {
        std::cout << "missing previous value" << std::endl;
        return EXIT_FAILURE;
    }
    std::ifstream in(av[1]);
    if (!in) {
        perror(av[1]);
        return EXIT_FAILURE;
    }
    std::string dest(av[3]);
    std::string src(av[2]);
    std::string name = (std::string(av[1]) + ".replace").c_str();
    std::ofstream out(name.c_str());
    if (!out) {
        perror(name.c_str());
        return EXIT_FAILURE;
    }
    std::string word;
    std::stringstream buffer;
    buffer << in.rdbuf();
    size_t i = 0;
    while (i < buffer.str().length()) {
        if (buffer.str().substr(i, src.length()) == src) out << dest, i += src.length();
        else out << buffer.str()[i++];
    }
}
