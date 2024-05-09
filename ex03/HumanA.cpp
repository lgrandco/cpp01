#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon) {
    this->name = name;
    this->weapon = weapon;
}
void HumanA::attack() { print_color(this->name + " attacks with their " + this->weapon.getType()); }
HumanA::~HumanA() { print_color(this->name + " died"); }
