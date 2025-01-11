/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:01:54 by walnaimi          #+#    #+#             */
/*   Updated: 2025/01/10 10:09:59 by toru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Create a zombie on the stack and call announce
void randomChump(std::string name) {
    Zombie tempZombie(name);  // Stack-allocated zombie
    tempZombie.announce(); // Announce the stack-zombie and stack allocated variables will deconstruct at the end of the function
}
