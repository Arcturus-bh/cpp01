#include "HumanB.hpp"
#include "Weapon.hpp"

// constructeur
HumanB::HumanB(std::string name, Weapon weapon) {
	this->name = name;
	this->weapon = weapon;
}

// destructeur
HumanB::~HumanB(void) {
	;
}

void	HumanB::attack(void) {
	std::cout << this->name << "attack with their" << weapon.getType() << std::endl;
}