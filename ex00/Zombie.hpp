#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
    std::string name;  // Private attribute

public:
    Zombie(std::string name);  // Constructor
    ~Zombie();                 // Destructor
    void announce(void);        // Member function to announce the zombie
};

#endif
