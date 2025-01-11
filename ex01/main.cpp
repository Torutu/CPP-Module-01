/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:39:10 by walnaimi          #+#    #+#             */
/*   Updated: 2025/01/10 08:55:11 by toru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "zombieHorde.hpp"

// Function to test the zombie horde
int main() {
    int numberOfZombies = 5;  // Example number of zombies
    Zombie* horde = zombieHorde(numberOfZombies, "Zombie");

    // Announce each zombie in the horde
    for (int i = 0; i < numberOfZombies; ++i) {
        horde[i].announce();
    }

    // Clean up the allocated zombies
    delete[] horde; // Frees memory allocated for the entire array because of the [] operator
    return 0;
}
