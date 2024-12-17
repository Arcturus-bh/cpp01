#include "HumanB.hpp"

// constructeur
HumanB::HumanB(std::string name) {
    this->name = name;
}

//destructeur
HumanB::~HumanB(void) {
    ;
}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack(void) {
    if (this->weapon == NULL)
        std::cout << RED << "ERROR: " << this->name << " can't attack without weapon" << RESET << std::endl;
    else  
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}