/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:31:13 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/22 15:42:33 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	int N = 5;
	Zombie* horde = zombieHorde(N, "Pedro le loco");

	for (int i = 0; i < N; i++)
		horde->announce();
	delete[] horde;

	return 0;
}