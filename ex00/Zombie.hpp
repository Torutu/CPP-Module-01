#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;  // Private name attribute

public:
    Zombie(std::string name);  // Constructor
    ~Zombie();                 // Destructor
    void announce(void);        // Member function to announce the zombie
};

#endif
