/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 21:23:22 by toru              #+#    #+#             */
/*   Updated: 2025/01/11 21:23:22 by toru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA vi("Vi", club);
        vi.attack();
        club.setType("some other type of club");
        vi.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jinx("Jinx");
        jinx.setWeapon(club);
        jinx.attack();
        club.setType("some other type of club");
        jinx.attack();
    }

    return 0;
}