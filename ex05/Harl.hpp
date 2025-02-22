/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 15:37:11 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/21 15:44:10 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
#define HARL_CPP

# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define MAGENTA "\x1b[35m"
# define RED     "\x1b[31m"
# define RESET   "\x1b[0m"

#include <iostream>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
};

bool    is_only_space(std::string& str);

#endif