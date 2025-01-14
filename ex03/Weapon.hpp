/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 21:23:32 by toru              #+#    #+#             */
/*   Updated: 2025/01/11 21:23:32 by toru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

//Implement a Weapon class that has:
class Weapon {
private:
    std::string type; // A private attribute type, which is a string

public:
    Weapon(const std::string &type); // Constructor with initial type
    const std::string &getType() const; // A getType() member function that returns a const reference to type.
    void setType(const std::string &type); // A setType() member function that sets type using the new one passed as parameter.
};

#endif
