#include "Harl.hpp"

Harl::Harl(void) {
	;
}

Harl::~Harl(void) {
	;
}

void Harl::debug(void) {
    std::cout << GREEN << "[DEBUG]   : I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET << std::endl;
}

void Harl::info(void) {
    std::cout << YELLOW << "[INFO]    : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void Harl::warning(void) {
    std::cout << MAGENTA <<  "[WARNING] : I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void Harl::error(void) {
    std::cout << RED << "[ERROR]   : This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::complain(std::string level) {
    int i = 0;
    if (level.empty() || is_only_space(level)) {
        std::cout << RED << "ERROR - complain argument must be 'debug', 'info', 'warning' or 'error'" << RESET << std::endl;
        return;
    }
    std::string str[] = {"debug", "info", "warning", "error"};
    while (i < 4)
    {
        if (level.compare(str[i]) == 0)
            break;
        i++;
    }
    if (i > 4) {
        std::cout << RED << "ERROR - complain argument must be 'debug', 'info', 'warning' or 'error'" << RESET << std::endl;
        return;
    }
    i = 0;
    void (Harl::* ptr_functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    while (i < 4)
    {
        (this->*ptr_functions[i])();
        if (level == str[i])
            return;
        i++;
    }
}
