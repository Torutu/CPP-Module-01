/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 21:23:03 by toru              #+#    #+#             */
/*   Updated: 2025/01/11 21:23:03 by toru             ###   ########.fr       */
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
