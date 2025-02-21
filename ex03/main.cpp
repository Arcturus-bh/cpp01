/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:38:21 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/21 10:55:48 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
    {
        std::cout << "\nHumanA test - mandatory 🪓" << std::endl;
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        std::cout << "\nHumanB test - optional 🪓" << std::endl;
        Weapon club = Weapon("blue toothpick");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("red toothpick");
        jim.attack();
    }
    {
        std::cout << "\nHumanB test - optional 🪓" << std::endl;
        HumanB jim("Jim");
        jim.attack();
    }
}