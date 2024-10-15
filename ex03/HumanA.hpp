#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
public:
    HumanA(const std::string &name, Weapon &weapon); // Constructor with name and weapon reference
    void attack() const; // Print attack message

private:
    std::string name; // Name of the human
    Weapon &weapon; // Reference to weapon (always armed)
};

#endif
