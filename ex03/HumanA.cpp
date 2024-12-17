#include "HumanA.hpp"

// constructeur
HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {
    ;
}

//destructeur
HumanA::~HumanA(void) {
    ;
}

void HumanA::attack(void) {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}