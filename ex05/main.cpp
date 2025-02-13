#include "Harl.hpp"

bool    is_only_space(std::string& str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ' && str[i] != '\t')
            return false;
    }
    return true;
}

int main(void) {
    Harl harl;

    std::cout << "Test with second level" << std::endl;
    harl.complain("info");
    std::cout << std::endl;

    std::cout << "Test with first level" << std::endl;
    harl.complain("debug");
    std::cout << std::endl;

    std::cout << "Test with last level" << std::endl;
    harl.complain("error");
    std::cout << std::endl;

    std::cout << "Test with third level" << std::endl;
    harl.complain("warning");
    std::cout << std::endl;

    std::cout << "Test with only spaces in level" << std::endl;
    harl.complain("     ");
    std::cout << std::endl;

    std::cout << "Test with empty level" << std::endl;
    harl.complain("");
    std::cout << std::endl;

    return 0;
}