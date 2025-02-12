/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:37:04 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/12 16:54:57 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie("Albert");
	Zombie* zombie2 = new Zombie("Michelle");

	randomChump("Igor");
	zombie2->announce();
	delete zombie2;
	return 0;
}