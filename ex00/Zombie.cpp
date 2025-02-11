#include "Zombie.hpp"

Zombie::Zombie(void) {}

// constructeur
Zombie::Zombie(std::string name) {
	this->setName(name);
}

Zombie::~Zombie(void) {}

void Zombie::announce(void) {
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string& name) {
	this->_name = name;
}

std::string	Zombie::getName(void) const {
	return this->_name;
}