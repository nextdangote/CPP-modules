#include "Zombie.hpp"

void    randomChump( std::string name )
{
    // stack
    Zombie  zombielife(name);

    //zombielife.Zombie(name);
    zombielife.announce();
}