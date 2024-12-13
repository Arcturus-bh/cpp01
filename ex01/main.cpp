
#include "Zombie.hpp"

int main(void) {
	Zombie* firstZombie = zombieHorde(50, "coucou");

	std::cout << "\nZombie n°1 → ";
	firstZombie->announce();
	delete firstZombie;
	std::cout << RED "[Deleted] zombie n°1" << RESET << std::endl;
	return 0;
}