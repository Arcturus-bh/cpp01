/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 09:44:55 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/21 10:19:47 by aldalmas         ###   ########.fr       */
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

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif