#include "Zombie.hpp"

int main(void) {
    Zombie* horde = zombieHorde(5, "Zombie");
    if (horde == NULL) {
        std::cout << "Invalid number of zombies" << std::endl;
        return (1);
    }
    for (int i = 0; i < 5; i++) { horde[i].announce(); }
    delete[] horde;
    return (0);
}
