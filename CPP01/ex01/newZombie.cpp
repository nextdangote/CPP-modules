#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie  *zombielife;

    zombielife = new Zombie(name);

    // zombielife->Name = name;
    zombielife->announce();
    return (zombielife);
}