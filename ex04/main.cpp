/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:00:41 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/23 13:30:47 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

bool is_file_open(std::ifstream& file) {
	if (!file.is_open())
	{
		std::cerr << RED << "FILE ERROR - Invalid file" << RESET << std::endl;
		return false;
	}
	return true;
}

bool is_outfile_open(std::ofstream& outfile) {
	if (!outfile.is_open())
	{
		std::cerr << RED << "OUTFILE ERROR - Outfile is not opened" << RESET << std::endl;
		return false;
	}
	return true;
}

bool is_tofind_empty(std::string to_find) {
	if (to_find.empty())
	{
		std::cerr << RED << "ARGS ERROR - s1 cannot be empty" << RESET << std::endl;
		return true;
	}
	return false;
}

bool check_size(std::string to_find, std::string replace) {
	if (replace.size() > to_find.size())
	{
		std::cerr << RED << "ARGS ERROR - s2 cannot be greater than s1" << RESET << std::endl;
		return false;
	}
	return true;
}

int main(int ac, char **av) {
	if (ac != 4)
	{
		std::cerr << RED << "ARG NB ERROR -need a filename, s1 and s2" << RESET << std::endl;
		return 1;
	}
	
	size_t 			pos;
	std::string 	line;
	std::string 	to_find = av[2];
	std::string 	replace = av[3];
	std::string 	outfile_name = std::string(av[1]) + ".replace";
	const char 		*c_outfile_name = outfile_name.c_str();
	std::ifstream 	file;
	std::ofstream 	outfile;

	if (is_tofind_empty(to_find) == true)
		return 1;
	
	if (check_size(to_find, replace) == false)
		return 1;
		
	file.open(av[1], std::ifstream::in);
	if (is_file_open(file) == false)
		return 1;
		
	outfile.open(c_outfile_name, std::ofstream::out);
	if (is_outfile_open(outfile) == false)
		return 1;
		
	while (std::getline(file, line)) {
		pos = 0;
		while ((pos = line.find(av[2], pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + replace + line.substr(pos + to_find.size());
			pos += replace.size();
		}
		outfile << line << std::endl;
	}
	
	file.close();
	outfile.close();
	return 0;
}