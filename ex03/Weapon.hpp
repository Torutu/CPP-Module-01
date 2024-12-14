/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:12:20 by marvin            #+#    #+#             */
/*   Updated: 2024/11/10 18:12:20 by marvin           ###   ########.fr       */
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
