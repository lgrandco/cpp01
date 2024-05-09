#include "Zombie.hpp"

int main() {
    Zombie zombie1("Zombie_on_stack");
    zombie1.announce();
    Zombie* zombie2 = newZombie("Zombie_on_heap");
    zombie2->announce();
    randomChump("Chump");
    delete zombie2;
    return 0;
}
