/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:31:07 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/21 10:31:09 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define RESET   "\x1b[0m"

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void		announce(void);
		void 		setName(std::string& name);
		std::string	getName(void) const;
};

Zombie* zombieHorde(int N, std::string name);

#endif
