#include "HumanB.hpp"

HumanB::HumanB(std::string name) { this->name = name; }

void HumanB::setWeapon(Weapon& weapon) { this->weapon = &weapon; }

void HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::~HumanB() { std::cout << this->name << " died" << std::endl; }