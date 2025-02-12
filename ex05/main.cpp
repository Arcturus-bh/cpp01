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

    harl.complain("x");
    return 0;
}