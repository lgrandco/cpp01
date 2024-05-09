#include "Harl.hpp"

Harl::Harl() {
    std::cout << "Harl created" << std::endl;
    map.insert("DEBUG", &Harl::debug);
    map.insert("INFO", &Harl::info);
    map.insert("WARNING", &Harl::warning);
    map.insert("ERROR", &Harl::error);
}

Harl::~Harl() { std::cout << "Harl destroyed" << std::endl; }

void Harl::debug() {
    print_color(
        "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I "
        "really do!"
    );
}

void Harl::info() {
    print_color(
        "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my "
        "burger !If you did, I wouldn't be asking for more!"
    );
}

void Harl::warning() {
    print_color(
        "I think I deserve to have some extra bacon for free. I've been coming for years "
        "whereas you started working here since last month."
    );
}

void Harl::error() { print_color("This is unacceptable! I want to speak to the manager now."); }

void Harl::complain(std ::string level) {
    void (Harl::*fct)() = map.get_value(level);
    if (fct) (this->*fct)();
}
