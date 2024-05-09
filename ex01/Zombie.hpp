#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "colors.hpp"

class Zombie {
private:
    std::string name;
    static int count;

public:
    Zombie(std::string name);
    Zombie();
    void set_name(std::string name);
    void announce(void);
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
