/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:30:52 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/22 15:41:54 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << GREEN << "Constructeur par defaut de zombie " << RESET << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << GREEN << "Constructeur du zombie " << this->_name << RESET << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << RED << "Destructeur du zombie " << this->_name << RESET << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string& name) {
	this->_name = name;
}

std::string	Zombie::getName(void) const {
	return this->_name;
}