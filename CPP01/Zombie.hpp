#ifndef ZOMBIE_HPP
 #define ZOMBIE_HPP
#include <iostream>
#include <cstring>
#include <limits>

class   Zombie
{
    private :
    std::string Name;

    public :
    Zombie();
    ~Zombie();
    void    announce(void);
};

#endif