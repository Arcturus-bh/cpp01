#ifndef WEAPON_HPP
#define WEAPON_HPP

# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN    "\x1b[36m"
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