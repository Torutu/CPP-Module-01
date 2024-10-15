#include "Zombie.hpp"
#include "zombieHorde.hpp"

// Function to test the zombie horde
int main() {
    int numberOfZombies = 2;  // Example number of zombies
    Zombie* horde = zombieHorde(numberOfZombies, "Zombie");

    // Announce each zombie in the horde
    for (int i = 0; i < numberOfZombies; ++i) {
        horde[i].announce();
    }

    // Clean up the allocated zombies
    delete[] horde; // Delete the entire horde to prevent memory leaks
    return 0;
}
