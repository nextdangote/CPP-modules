// #include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

// ! to do : add copy constructor and copy assignment operator to cpp03 : ex00, ex01, ex02 / cpp04 ex00
// ! make the bonus of cpp01
// ! clean everything and make sure I have beautiful tests for all of em 

int main(void)
{
    ClapTrap Lil_baby("Lil Baby");
    ClapTrap Drake("Drake");

    Lil_baby.beRepaired(3);
    Drake.attack("Lil Baby");
    Lil_baby.takeDamage(3);
    Drake.attack("Lil Baby");
    Lil_baby.takeDamage(7);

    ScavTrap Lil_babySca(" Scandinavian Lil Baby");
    ScavTrap DrakeSca("Scandinavian Drake");

    Lil_babySca.beRepaired(3);
    DrakeSca.attack("Lil Baby");
    Lil_babySca.takeDamage(3);
    DrakeSca.attack("Lil Baby");
    Lil_babySca.takeDamage(7);


    FlagTrap CentralCee("Central Cee");
    FlagTrap Freeze("Freeze");
    CentralCee.beRepaired(3);
    Freeze.attack("Lil Baby");
    CentralCee.takeDamage(3);
    Freeze.attack("Lil Baby");
    CentralCee.takeDamage(7);
    CentralCee.highFivesGuys();
}