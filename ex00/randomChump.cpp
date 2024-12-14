/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:01:54 by walnaimi          #+#    #+#             */
/*   Updated: 2024/11/10 19:01:55 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Create a zombie on the stack and call announce
void randomChump(std::string name) {
    Zombie tempZombie(name);  // Stack-allocated zombie
    tempZombie.announce();
}
