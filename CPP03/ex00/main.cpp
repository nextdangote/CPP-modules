#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Lil_baby("Lil Baby");
    ClapTrap Drake("Drake");

    Lil_baby.beRepaired(3);
    Drake.attack("Lil Baby");
    Lil_baby.takeDamage(3);
    Drake.attack("Lil Baby");
    Lil_baby.takeDamage(7);
}