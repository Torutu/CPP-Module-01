/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:01:39 by walnaimi          #+#    #+#             */
/*   Updated: 2025/01/10 10:05:59 by toru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie* heapZombie = newZombie("HeapZombie");// Create a zombie on the heap
    heapZombie->announce();//announces the heap zombie
    randomChump("StackZombie");// Create a zombie on the stack and announce it
    delete heapZombie;// Destroy the heap-allocated zombie
    return (0);
}
