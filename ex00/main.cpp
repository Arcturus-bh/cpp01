/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:37:04 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/21 10:19:26 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie("Albert");
	Zombie* zombie2 = new Zombie("Michelle");
	Zombie* zombie3 = newZombie("Eglantine");

	randomChump("Igor");
	zombie2->announce();
	zombie3->announce();
	delete zombie2;
	delete zombie3;

	return 0;
}