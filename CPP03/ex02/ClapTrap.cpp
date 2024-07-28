#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{

}

ClapTrap::ClapTrap(std::string called) :Name(called), EnergyPoints(10), AttackDamage(0), HitPoints(10)
{
    std::cout << called << " has been created and is officialy a ClapTrapper in The ClapTrap House" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << this->Name << " is now DESTRUCTED getttt out of the ClapTrap House !!! " << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoints <= 0)
    {
        std::cout << "HEYYYY" << this->Name << " Can not attack this guy has no freaking energyyyyy he has to get some sleep" << std::endl;
        return;
    }
    std::cout << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of Damage!" << std::endl;
    this->EnergyPoints--;
    std::cout << this->Name << " loses 1 energy point and has now " << this->EnergyPoints << std::endl;
    //takeDamage(this->AttackDamage); // it should be called with the victim of the attack
    //! how can I automatize the fact that when I attack someone it triggers also the takeDamage function for the victim of the attack
}

void ClapTrap::takeDamage(unsigned int amount)
{
    //
    if (this->HitPoints <= 0)
    {
        std::cout << this->Name << " is already dead" << std::endl;
        this->HitPoints = 0;
    }
    this->HitPoints = this->HitPoints - amount;
    std::cout << this->Name << " took a " << amount << " damage" << std::endl;
    if (this->HitPoints > 0)
    {
        std::cout << this->Name << " has " << this->HitPoints << " hit point " << std::endl;
    }
    if (this->HitPoints <= 0)
    {
        std::cout << this->Name << " is dead" << std::endl;
        this->HitPoints = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    // if (amount < 0)
    // {
    //     std::cout << "brooo you can not repair someone with some poison give them some positive vibe" << std::endl;
    //     return;
    // }
    if (this->EnergyPoints <= 0)
    {
        std::cout << "heyyyyyy " << this->Name << " can not repair themselves because this Brokie has no Energy points no more " << std::endl;
        return;
    }
    std::cout << this->Name << " gained " << amount << " of hit points" << std::endl;
    this->HitPoints = this->HitPoints + amount;
    if (this->HitPoints > 10)
        this->HitPoints = 10;
    std::cout << this->Name << " has now " << this->HitPoints << " hit point" << std::endl;
    this->EnergyPoints--;
    std::cout << this->Name << " used one point to heal themselves and has now " << this->EnergyPoints << " energy points" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap& other)// copy constructor
{
    this->AttackDamage = other.AttackDamage;
    this->EnergyPoints = other.EnergyPoints;
    this->HitPoints = other.HitPoints;
    this->Name = other.Name;
    std::cout << "Clap Trap was copy constructed" << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& other) // copy assignment operator
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