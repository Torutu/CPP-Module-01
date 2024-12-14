/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:12:08 by marvin            #+#    #+#             */
/*   Updated: 2024/11/10 18:12:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
public:
    HumanA(const std::string &name, Weapon &weapon); // HumanA takes the Weapon in its constructor, HumanB doesn’t.
    void attack() const; // Print attack message

private:
    std::string name; // Name of the human
    Weapon &weapon; // Reference to weapon (always armed)
};

#endif
