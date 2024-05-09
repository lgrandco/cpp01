#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}
Zombie::~Zombie() { print_color(name + " died"); }
void Zombie::announce() { print_color(name + " BraiiiiiiinnnzzzZ..."); }
