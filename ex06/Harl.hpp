#ifndef HARL_HPP
#define HARL_HPP

#include "HashMap.hpp"
#include "colors.hpp"

class Harl {
private:
    HashMap<void (Harl::*)()> map;
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
