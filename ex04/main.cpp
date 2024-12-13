#include "sed.hpp"

int main(int ac, char **av) {
	if (ac != 4)
	{
		std::cout << RED << "[ARG NB ERROR] need a filename, s1 and s2" << RESET << std::endl;
		return 0;
	}
	std::string line;
	std::string outfile_name = std::string(av[1]) + ".replace";
	std::ifstream file;
	std::ofstream outfile;
	const char *c_outfile_name = outfile_name.c_str();

	file.open(av[1], std::ifstream::in);
	if (!file.good())
	{
		std::cout << RED << "[FILE ERROR] Invalid file" << RESET << std::endl;
		return 0;
	}
	outfile.open(c_outfile_name, std::ifstream::out);
		if (!file.good())
	{
		std::cout << RED << "[FILE ERROR] Outfile is not opened" << RESET << std::endl;
		return 0;
	}
	while (std::getline(file, line)) {
		std::cout << "infile: " << line << std::endl;
		if (line.compare(av[2]) == 0) {
			line = av[3];
		}
		outfile << line << std::endl;
	}
	file.close();
	outfile.close();
}