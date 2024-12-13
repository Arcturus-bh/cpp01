#ifndef HUMANB_H
#define HUMANB_H

class HumanB
{
	private:

	public:
		std::string name;
		Weapon		weapon;

		HumanB(std::string name, Weapon weapon);
		~HumanB(void);

		void		attack(void);
		void		setWeapon(Weapon );
};

#endif
