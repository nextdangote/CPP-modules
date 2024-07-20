#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : Name(name)
{

}

Zombie::~Zombie(void)
{
    std::cout << this->Name << " destructed" << std::endl;
}