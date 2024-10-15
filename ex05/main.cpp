#include "Harl.hpp"
#include <iostream>

int main() {
    Harl harl;

    std::cout << "Testing Harl's complaints at different levels:" << std::endl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("UNKNOWN");  // Testing unknown level

    return 0;
}
