/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 09:44:50 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/19 14:35:39 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << GREEN << "Constructeur du zombie " << this->getName() << RESET << std::endl;
}

Zombie::Zombie(std::string name) {
	this->setName(name);
	std::cout << GREEN << "Constructeur du zombie " << this->getName() << RESET << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << RED << "Destructeur du zombie " << this->getName() << RESET << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string& name) {
	this->_name = name;
}

std::string	Zombie::getName(void) const {
	return this->_name;
}