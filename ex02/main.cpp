#include <iostream>
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define RESET   "\x1b[0m"

int main(void) {
	std::string zombie;
	std::string &stringPTR = zombie;
	std::string* stringREF = &zombie;

	zombie = "HI THIS IS BRAIN";
	std::cout << GREEN << "MEMORY ADDRESS" << RESET << std::endl;
	std::cout << YELLOW << "└ string zombie → " << RESET << &zombie << std::endl;
	std::cout << YELLOW << "└ stringPTR     → " << RESET << &stringPTR << std::endl;
	std::cout << YELLOW << "└ stringREF     → " << RESET << &stringREF << std::endl;

	std::cout << GREEN << "VALUE" << RESET << std::endl;
	std::cout << YELLOW << "└ string zombie → " << RESET << zombie << std::endl;
	std::cout << YELLOW << "└ stringPTR     → " << RESET << stringPTR << std::endl;
	std::cout << YELLOW << "└ stringREF     → " << RESET << stringREF << std::endl;
}