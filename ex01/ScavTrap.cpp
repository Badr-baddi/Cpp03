#include "includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap"){
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << " ScavTrap default constructor called " << std::endl;

}
ScavTrap::ScavTrap(const std::string name) : ClapTrap(name){
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << " ScavTrap " << Name << " Constructor called " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other){
    ClapTrap::operator=(other);
    std::cout << "ScavTrap assignation operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}
