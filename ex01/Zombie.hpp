#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
public:
    Zombie(); // Default constructor
    Zombie(std::string name); // Constructor with name
    ~Zombie();                // Destructor
    void announce() const;    // Method to announce itself

private:
    std::string name;         // Name of the zombie
};

#endif // ZOMBIE_HPP
