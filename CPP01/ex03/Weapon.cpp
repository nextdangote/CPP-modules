#include "Weapon.hpp"

const std::string   Weapon::getType() const
{
    return type;
}

void    Weapon::setType(std::string NewType)
{
    this->type = NewType;
    //type = NewType ( apparently works too )
}

Weapon::Weapon(std::string type) : type(type)
{
    std::cout << "Weapon type " << type << " was created" << std::endl << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon type " << type << " was destructed" << std::endl << std::endl;
}