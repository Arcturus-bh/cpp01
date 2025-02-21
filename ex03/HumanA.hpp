/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:38:42 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/21 10:38:43 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    private:
        std::string     _name;
        Weapon&         _weapon;

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);

        void        attack(void);
};

#endif