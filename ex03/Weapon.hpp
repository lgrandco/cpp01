#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
private:
    std::string type;

public:
    Weapon(std::string);
    Weapon();
    ~Weapon();
    std::string const& getType(void);
    void setType(std::string type);
};

#include "HumanA.hpp"
#include "HumanB.hpp"

#endif
