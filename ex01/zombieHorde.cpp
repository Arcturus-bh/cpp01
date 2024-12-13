#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	if (N <= 0)
		return NULL;

	Zombie* horde[N]; 
	for (int i = 0; i < N; i++) {
		std::cout << GREEN << "[Created] zombie n°" << i + 1 << " → " << RESET;
		horde[i] = new Zombie(name);
		horde[i]->announce();
	}
	for (int i = 1; i < N; i++) {
		delete horde[i];
		std::cout << RED "[Deleted] zombie n°" << i + 1 << RESET << std::endl;
	}
	return horde[0];
}
