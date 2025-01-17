/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:39:14 by walnaimi          #+#    #+#             */
/*   Updated: 2025/01/10 08:55:11 by toru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Default constructor that initializes the zombie's name to "Unnamed"
Zombie::Zombie() : name("Unnamed") {}

// Constructor that initializes the zombie's name
Zombie::Zombie(std::string name) : name(name) {}

// Method for the zombie to announce itself
void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
// Destructor that announces when the zombie is destroyed
Zombie::~Zombie() {
    std::cout << name << " is destroyed!" << std::endl;
}