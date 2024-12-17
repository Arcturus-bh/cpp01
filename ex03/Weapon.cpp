#include "Weapon.hpp"

// constructeur
Weapon::Weapon(std::string type) {
    this->setType(type);
}

//destructeur
Weapon::~Weapon(void) {
    ;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}

std::string Weapon::getType(void) const {
    return this->_type;
}
