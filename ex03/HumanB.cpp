#include "HumanB.hpp"

HumanB::HumanB(std::string name) { this->name = name; }

void HumanB::setWeapon(Weapon& weapon) { this->weapon = &weapon; }

void HumanB::attack() {
    if (this->weapon == NULL) print_color(this->name + " cannot attack without weapon", std::cerr);
    else print_color(this->name + " attacks with their " + this->weapon->getType());
}

HumanB::~HumanB() { print_color(this->name + " died"); }
