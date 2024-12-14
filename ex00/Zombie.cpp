/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:01:59 by walnaimi          #+#    #+#             */
/*   Updated: 2024/11/10 19:02:00 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor to initialize the zombie's name
Zombie::Zombie(std::string name) : name(name) {}

// Destructor that prints a message when the zombie is destroyed
Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

// Announce function to print the zombie's message
void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
