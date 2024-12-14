/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:39:21 by walnaimi          #+#    #+#             */
/*   Updated: 2024/11/10 19:01:02 by walnaimi         ###   ########.fr       */
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
