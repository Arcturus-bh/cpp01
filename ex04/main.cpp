#include "sed.hpp"

void create_outfile(std::ifstream infile, std::string search, std::string replace) {
	std::ofstream file2("text2");
	file2 << "test" << std::endl;
}

int main(int ac, char **av) {
	if (ac != 4)
	{
		std::cout << RED << "[ARG NB ERROR] need a filename, s1 and s2" << RESET << std::endl;
		return 0;
	}
	std::string line;
	std::ifstream file;

	file.open(av[1], std::ifstream::in);
	if (!file.good())
	{
		std::cout << RED << "[FILE ERROR] Invalid file" << RESET << std::endl;
		return 0;
	}
	char c = file.get();
	while (file.good()) {
		std::cout << c;
		c = file.get();
	}
	create_outfile(file, av[2], av[3]);
}