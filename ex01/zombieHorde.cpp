/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:30:57 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/22 15:39:44 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0)
        return NULL;

    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
		horde[i].setName(name);
		std::cout << GREEN << "[Created] zombie n°" << i << " → " << horde[i].getName() << RESET << std::endl;
    }
    return horde;
}