#include "includes/FragTrap.hpp"

int main() {
    std::cout << "--- Creating FragTrap ---" << std::endl;
    FragTrap frag("ST-42");

    std::cout << "\n--- Testing Actions ---" << std::endl;
    frag.attack("an intruder");
    frag.takeDamage(20);
    frag.beRepaired(10);
    frag.highFivesGuys();

    std::cout << "\n--- Destruction Order ---" << std::endl;
    return 0;
}
