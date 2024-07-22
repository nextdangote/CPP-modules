#include <iostream>
#include <string>
#include <limits>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }

    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.attack();  // Jim has no weapon initially
        jim.setWeapon(club);  // Jim is given a weapon
        jim.attack();  // Jim now has a weapon
        club.setType("some other type of club");
        jim.attack();  // Jim attacks with the new weapon type
    }
    return 0;
}