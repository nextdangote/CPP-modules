#ifndef SCAVTRAP_HPP
 #define SCAVTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
private :

public :
    ScavTrap(std::string called);
    ~ScavTrap();
    ScavTrap(const ScavTrap& other); // copy constructor
    ScavTrap&   operator=(const ScavTrap& other); // copy assignment operator
    void attack(const std::string& target);
    void guardGate();
};
#endif