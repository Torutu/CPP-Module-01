/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:12:13 by marvin            #+#    #+#             */
/*   Updated: 2024/11/10 18:12:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
public:
    HumanB(const std::string &name); // Constructor with name only
    void setWeapon(Weapon &weapon); // Set weapon
    void attack() const; // Print attack message

private:
    std::string name; // Name of the human
    Weapon *weapon; // Pointer to weapon (can be null)
};

#endif
