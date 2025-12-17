#include "includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << " ScavTrap default constructor called " << std::endl;

}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name){
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << " ScavTrap " << this->Name << " Constructor called " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other){
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "ScavTrap assignation operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (Energy_points == 0){
        std::cout << " ScavTrap " << Name << " no energy for attack !! " << std::endl;
        return ;
    }
    if (Hit_points == 0){
        std::cout << " ScavTrap " << Name << " is destroyed and cannot attack! " << std::endl;
        return ;
    }
    std::cout << " ScavTrap " << Name << " attacks " << target << " causing " << Attack_damage << " points of damage! " << std::endl;
    Energy_points--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode!" << std::endl;
}
