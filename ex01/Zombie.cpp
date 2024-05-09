#include "Zombie.hpp"

int Zombie::count = 0;

void Zombie::set_name(std::string name) { this->name = name; }
Zombie::~Zombie() { print_color(name + " died"); }
void Zombie::announce() { print_color(name + " BraiiiiiiinnnzzzZ..."); }
Zombie::Zombie() {}
