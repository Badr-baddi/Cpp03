#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    private:
        std::string Name;
        unsigned Hit_points;
        unsigned Energy_points;
        unsigned Attack_damage;
    public:
        ClapTrap(const std::string& name);
        ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
