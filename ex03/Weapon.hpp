#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
public:
    Weapon(const std::string &type); // Constructor with initial type
    const std::string &getType() const; // Returns the weapon type (const reference)
    void setType(const std::string &type); // Sets a new type for the weapon

private:
    std::string type; // Weapon type
};

#endif
