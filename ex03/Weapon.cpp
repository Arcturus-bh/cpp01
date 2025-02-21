/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:38:38 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/21 10:49:24 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->setType(type);
    std::cout << GREEN << "(Constructeur Weapon) " << this->_type << " is equipped" << RESET << std::endl;
}

Weapon::~Weapon(void) {
    std::cout << RED << "(Destructeur Weapon)" << this->_type << " is unequipped" << RESET << std::endl;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}

std::string Weapon::getType(void) const {
    return this->_type;
}
