#include "include/ClapTrap.hpp"


ClapTrap::ClapTrap(){
    std::cout << "Default ClapTrap constructor called!!\n";
}

ClapTrap::ClapTrap(const std::string& name)
{
    Name = name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 10;
    std::cout << " ClapTrap " << Name << " constructor called! Initial HP: 10, EP: 10, AD: 0." << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other){
    std::cout << " ClapTrap copy constructor called " << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    std::cout << " ClapTrap assignation operator called " << std::endl;
    if (this != &other){
        Name = other.Name;
        Hit_points = other.Hit_points;
        Energy_points = other.Energy_points;
        Attack_damage = other.Attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << " ClapTrap " << Name << " destructor called! is finish :( " << std::endl;
}

//3lach Check dial HP w Energy? 7it ma ymkench ClapTrap ydir 7aja ila kan mdemmer (HP=0) wla taqyid (Energy=0).
void ClapTrap::attack(const std::string& target)
{
    if (Energy_points == 0){
        std::cout << " ClapTrap " << Name << " no energy for attack !! " << std::endl;
        return ;
    }
    if (Hit_points == 0){
        std::cout << " ClapTrap " << Name << " is destroyed and cannot attack! " << std::endl;
        return ;
    }
    std::cout << " ClapTrap " << Name << " attacks " << target << " causing " << Attack_damage << " points of damage! " << std::endl;
    Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points == 0){
        std::cout << " ClapTrap " << Name << " is already destroyed. No more damage taken. " << std::endl;
        return ;
    }
    if (amount >= Hit_points)
    {
        std::cout << " ClapTrap " << Name << " takes " << Hit_points << " points of damage and is destroyed! " << std::endl;
        return ;
    }
    else{
        std::cout << " ClapTrap " << Name << " takes " << Hit_points << " points of damage " << std::endl;
        Hit_points -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (Hit_points == 0){
        std::cout << " ClapTrap " << Name << " is destroyed and cannot repair! " << std::endl;
        return ;
    }
    if (Energy_points == 0){
        std::cout << " ClapTrap " << Name << " no energy points for repair! " << std::endl;
        return ;
    }
    std::cout << " ClapTrap " << Name << " repairs itself " << amount << " hit points! " << std::endl;
    Hit_points += amount;
    Energy_points--;
}

