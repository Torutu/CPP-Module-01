#include "Zombie.hpp"
#include <iostream>

// Constructor to initialize the zombie's name
Zombie::Zombie(std::string name) : name(name) {}

// Destructor that prints a message when the zombie is destroyed
Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

// Announce function to print the zombie's message
void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
