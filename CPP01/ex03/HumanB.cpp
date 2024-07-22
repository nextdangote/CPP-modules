#include "HumanB.hpp"

void    HumanB::attack(void)
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl << std::endl;
    else
        std::cout << name << "can't not attack cause he a brokie without Weapon, pray 4 him" << std::endl << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    std::cout << "Human B constructed no weapon taken" << std::endl << std::endl;
    weapon = NULL;
}

HumanB::~HumanB(void)
{
    std::cout << "Human B with name " << this->name << " is destroyed" << std::endl << std::endl;
}