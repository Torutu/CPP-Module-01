/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 21:23:17 by toru              #+#    #+#             */
/*   Updated: 2025/01/11 21:23:17 by toru             ###   ########.fr       */
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
