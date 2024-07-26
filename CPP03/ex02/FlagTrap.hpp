#ifndef FLAGTRAP_HPP
 #define FLAGTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class Flagtrap : public ClapTrap
{

private:

public:
    FlagTrap(std::string called);
    ~FlagTrap();
    void highFivesGuys(void);
};

#endif