/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:39:27 by walnaimi          #+#    #+#             */
/*   Updated: 2025/01/10 08:55:11 by toru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp" // Include the header file

// Function to create a horde of zombies
Zombie* zombieHorde(int N, std::string name) {
    // Allocate memory for N zombies
    Zombie* horde = new Zombie[N]; // Use single allocation for N zombies

    // Initialize each zombie with the given name
    for (int i = 0; i < N; ++i) {
        new (&horde[i]) Zombie(name); // Placement new to initialize zombies in place
    }

    return horde; // Return pointer to the first zombie
}
