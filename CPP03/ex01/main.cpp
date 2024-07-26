// #include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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