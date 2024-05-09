#include "Zombie.hpp"

int Zombie::count = 0;

void Zombie::set_name(std::string name) { this->name = name; }
Zombie::Zombie() {}
Zombie::~Zombie() { std::cout << name << " died" << std::endl; }
void Zombie::announce() { std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl; }
