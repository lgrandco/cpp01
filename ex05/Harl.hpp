#ifndef HARL_HPP
#define HARL_HPP

#include "HashMap.hpp"

class Harl {
private:
    HashMap map;
    void debug();
    void info();
    void warning();
    void error();

public:
    Harl();
    void complain(std::string level);
    ~Harl();
};

#endif
