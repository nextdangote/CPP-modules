#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string called) : ClapTrap(called)
{
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "The Scavtrap with name " << this->Name << " is DESTRUCTEDDDDD, ANNIHILITAED, EXTERMINATEDDDD" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->EnergyPoints <= 0)
    {
        std::cout << "HEYYYY" << this->Name << " The Scandinavian Trapper is Tiredddd Not enough energy to recharge" << std::endl;
        return;
    }
    std::cout << this->Name << " is OFFENSIVEEE " << target << ", causing " << this->AttackDamage << " points of Damage! Crazyyyy" << std::endl;
    this->EnergyPoints--;
    std::cout << "Minus 1 energy point " << this->Name << " and he has now " << this->EnergyPoints << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "Scavtrap is now in Gate keeper mode" << std::endl;
}