/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:01:39 by walnaimi          #+#    #+#             */
/*   Updated: 2024/12/13 18:54:44 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    // Create a zombie on the heap and announce it
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    
    // Create a zombie on the stack and announce it
    randomChump("StackZombie");

    // Destroy the heap-allocated zombie
    delete heapZombie;

    return 0;
}
