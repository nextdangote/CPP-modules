#ifndef CLAPTRAP_HPP
 #define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{

private:
// maybe I will initialize them in the constructor
    std::string Name;
    int EnergyPoints;
    int AttackDamage;
    int HitPoints;

public:
    ClapTrap(std::string called);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif