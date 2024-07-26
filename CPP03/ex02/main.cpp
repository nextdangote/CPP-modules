// #include "ClapTrap.hpp"
#include "ScavTrap.hpp"
// ! to do : add copy constructor and copy assignment operator to all of them
// ! make sure flagtrap works properly
// ! modify the messages from contsructor and destructor
// ! make cpp04
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

}