#include "Weapon.hpp"

Weapon::Weapon(std::string type) { this->type = type; }
Weapon::Weapon() {}
Weapon::~Weapon() { print_color(this->type + " has been destroyed"); }
std::string const& Weapon::getType(void) { return this->type; }
void Weapon::setType(std::string type) { this->type = type; }
