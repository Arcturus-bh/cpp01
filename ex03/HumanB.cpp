/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:38:31 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/21 10:51:47 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// constructeur
HumanB::HumanB(std::string name) : _name(name) {
    this->_weapon = NULL;
    std::cout << GREEN << "(Constructeur HumanB) " << this->_name << RESET << std::endl;
}

//destructeur
HumanB::~HumanB(void) {
    std::cout << RED << "(Destructeur HumanB) " << this->_name << RESET << std::endl;

}

void HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}

void HumanB::attack(void) {
    if (this->_weapon == NULL)
        std::cout << RED << this->_name << " is too weak for attack without weapon" << RESET << std::endl;
    else  
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}