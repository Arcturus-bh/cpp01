/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:31:13 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/21 10:31:15 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie* firstZombie = zombieHorde(14, "Pedro le loco");

	std::cout << "\nZombie n°1 → ";
	firstZombie->announce();
	delete firstZombie;
	std::cout << RED "[Deleted] zombie n°1" << RESET << std::endl;
	
	return 0;
}