#include "Zombie.hpp"

// Create a new zombie on the heap and return a pointer to it
Zombie* newZombie(std::string name) {
    return new Zombie(name);
}
