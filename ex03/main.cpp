#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	Weapon knife = Weapon("sharp weapon");
	HumanA bob("Bob", knife);
	bob.attack();
	knife.setType("another sharp weapon");
	bob.attack();
}