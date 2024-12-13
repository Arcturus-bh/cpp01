#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
	private:

	public:
		std::string name;
		Weapon 		weapon;

		HumanA(std::string name, Weapon weapon);
		~HumanA(void);

		void		attack(void);
};

#endif