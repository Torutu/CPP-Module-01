#include "Zombie.hpp"
#include <iostream>

// Declaration of the functions
Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    // Create a zombie on the heap and announce it
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();

    // Create a zombie on the stack and announce it
    randomChump("StackZombie");

    // Destroy the heap-allocated zombie
    delete heapZombie;

    return 0;
}
