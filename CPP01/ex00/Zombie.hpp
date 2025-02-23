#ifndef ZOMBIE_HPP
 #define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <cctype>
#include <limits>

class   Zombie
{
    private :
    std::string Name;

    public :
    Zombie(std::string name);
    ~Zombie();
    void    announce();
    //Zombie* newZombie( std::string name );
    //void    randomChump( std::string name );
};

void    randomChump( std::string name );
Zombie* newZombie( std::string name );
#endif