#ifndef FLAGTRAP_HPP
 #define FLAGTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
private:

public:
    FlagTrap(std::string called);
    ~FlagTrap();
    void highFivesGuys(void);
    FlagTrap(const FlagTrap& other); // copy constructor
    FlagTrap&   operator=(const FlagTrap& other); // copy assignment operator
};

#endif