#include "Zombie.hpp"

// Create a zombie on the stack and call announce
void randomChump(std::string name) {
    Zombie tempZombie(name);  // Stack-allocated zombie
    tempZombie.announce();
}
