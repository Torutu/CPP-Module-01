/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:01:47 by walnaimi          #+#    #+#             */
/*   Updated: 2025/01/10 08:55:11 by toru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Create a new zombie on the heap and return a pointer to it
Zombie* newZombie(std::string name) {
    return new Zombie(name);
}
