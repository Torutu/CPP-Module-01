/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:01:47 by walnaimi          #+#    #+#             */
/*   Updated: 2024/11/10 19:01:50 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Create a new zombie on the heap and return a pointer to it
Zombie* newZombie(std::string name) {
    return new Zombie(name);
}
