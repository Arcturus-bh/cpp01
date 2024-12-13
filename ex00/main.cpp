
#include "Zombie.hpp"

int main(void)
{
	Zombie zombie("Albert");
	Zombie* zombie2 = new Zombie("Michelle");

	randomChump("Igor");
	zombie2->announce();
	//delete zombie2;
	return 0;
}