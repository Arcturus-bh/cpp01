/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:38:48 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/21 10:38:49 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define RESET   "\x1b[0m"

#include <iostream>

class Weapon {
    private:
        std::string _type;

    public:
        Weapon(std::string type);
        ~Weapon(void);

        void        setType(std::string type);
        std::string getType(void) const;
};

#endif