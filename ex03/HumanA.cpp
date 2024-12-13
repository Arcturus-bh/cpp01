#include "HumanA.hpp"
#include "Weapon.hpp"

// constructeur
HumanA::HumanA(std::string name, Weapon weapon) : name(name), weapon(weapon) {
}

HumanA::~HumanA(void) {
	// destructeur
	;
}

void HumanA::attack(void) {
	std::cout << this->name << "attack with their" << weapon.getType() << std::endl;
}