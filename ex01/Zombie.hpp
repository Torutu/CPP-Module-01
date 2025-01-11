/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:39:21 by walnaimi          #+#    #+#             */
/*   Updated: 2025/01/10 08:55:11 by toru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
public:
    Zombie(); // Default constructor
    Zombie(std::string name); // Constructor with name
    ~Zombie();                // Destructor
    void announce() const;    // Method to announce itself

private:
    std::string name;         // Name of the zombie
};

#endif // ZOMBIE_HPP
