#ifndef CLAPTRAP_HPP
 #define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{

protected:
// maybe I will initialize them in the constructor
    std::string Name;
    int EnergyPoints;
    int AttackDamage;
    int HitPoints;

public:
    ClapTrap(void);
    ClapTrap(std::string called);
    ~ClapTrap();
    ClapTrap(const ClapTrap& other); // copy constructor
    ClapTrap&   operator=(const ClapTrap& other); // copy assignment operator
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif