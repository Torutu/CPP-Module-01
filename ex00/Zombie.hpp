/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:02:03 by walnaimi          #+#    #+#             */
/*   Updated: 2025/01/10 09:21:55 by toru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;  // Private name attribute

public:
    Zombie(std::string name);  // Constructor
    ~Zombie();                 // Destructor
    void announce(void);        // Member function to announce the zombie
};

//Declaration of the functions
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
