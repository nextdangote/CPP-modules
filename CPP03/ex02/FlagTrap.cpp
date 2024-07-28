#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string called) : ClapTrap(called)
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FlagTrap Constructor called" << std::endl;
}

FlagTrap::~FlagTrap()
{
    std::cout << "FlagTrap Destructor called" << std::endl;
}

void FlagTrap::highFivesGuys(void)
{
    std::cout << Name << " said : do you want to make a Highfive ????" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap& other) : ClapTrap(other) // copy constructor
{
    this->AttackDamage = other.AttackDamage;
    this->EnergyPoints = other.EnergyPoints;
    this->HitPoints = other.HitPoints;
    this->Name = other.Name;
    std::cout << "Clap Trap was copy constructed" << std::endl;
}

FlagTrap&   FlagTrap::operator=(const FlagTrap& other) // copy assignment operator
{
    if(this != &other)
    {
        this->AttackDamage = other.AttackDamage;
        this->EnergyPoints = other.EnergyPoints;
        this->HitPoints = other.HitPoints;
        this->Name = other.Name;
    }
    std::cout << "Clap Trap was copy assigned" << std::endl;
    return *this;
}