#include "includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    std::cout << " FragTrap default constructor called " << std::endl;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name){
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << " FragTrap " << this->Name << " Constructor called " << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other){
    std::cout << " FragTrap copy constructor called " << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other){
    std::cout << " FragTrap Assignment Operator called" << std::endl;
    if (this != &other){
        Name = other.Name;
        Hit_points = other.Hit_points;
        Energy_points = other.Energy_points;
        Attack_damage = other.Attack_damage;
    }
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Destructor called for " << Name << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << Name << " is asking for a positive high five! ✋" << std::endl;
}
