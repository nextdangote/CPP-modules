#include "HumanA.hpp"

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
    std::cout << "Human A has Weapon type " << weapon.getType() << " and is named " << name << std::endl << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "Human A with name " << this->name << " is destroyed" << std::endl << std::endl;
}