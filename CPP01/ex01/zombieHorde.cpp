#include "Zombie.hpp"

// Time to create a horde of Zombies!
// Implement the following function in the appropriate file:
// Zombie* zombieHorde( int N, std::string name );
// It must allocate N Zombie objects in a single allocation. Then, it has to initialize the
// zombies, giving each one of them the name passed as parameter. The function returns a
// pointer to the first zombie.
// Implement your own tests to ensure your zombieHorde() function works as expected.
// Try to call announce() for each one of the zombies.
// Don’t forget to delete all the zombies and check for memory leaks.

//zombieHorde.cpp

Zombie* zombieHorde( int N, std::string name )
{
    // Zombie* horde = new Zombie[N];

    // for(int i = 0; i < N; i++)
    // {
    //    horde[i] = new Zombie(name);
    // }
    if (N <= 0)
        return NULL;

    // Allocate memory for N Zombie objects
    Zombie* horde = static_cast<Zombie*>(operator new[](N * sizeof(Zombie)));

    // Use placement new to construct each Zombie object in the allocated memory
    for (int i = 0; i < N; i++)
    {
        new (&horde[i]) Zombie(name);
    }
    for(int j = 0; j < N; j++)
    {
        horde[j].announce();
    }
    return (horde);
}