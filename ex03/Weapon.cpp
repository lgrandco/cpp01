#include "Weapon.hpp"

Weapon::Weapon(std::string type) { this->type = type; }
Weapon::Weapon() {}
Weapon::~Weapon() { std::cout << this->type << " has been destroyed" << std::endl; }

std::string const& Weapon::getType(void) { return this->type; }
void Weapon::setType(std::string type) { this->type = type; }
