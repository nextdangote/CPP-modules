#include "Zombie.hpp"

int space_only(std::string str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (!isspace(str[i]))
            return(0);
        i++;
    }
    return (1);
}

int main(void)
{
    //on va demander le nom du zombie qu'on veut creer
    //int i;
    std::string name1;
    std::string name2;
    std::string name3;

    name1 = "brainlover";
    name2 = "arrrghhh";
    name3 = "hamzaaa";
    //i = 0;
  
        // std::cout << "type name of your zombie" << std::endl;
        // std::getline(std::cin, str);
        // if (str.length() == 0 || space_only(str))
        // {
        //     std::cout << "type a correct Name bruv" << std::endl;
        //     continue;
        // }
        randomChump(name1);
        Zombie* zebi = newZombie(name2);
        delete zebi;
        Zombie* hamzaaa = zombieHorde(9, name3);
        for (int i = 0; i < 9; ++i) 
        {
            hamzaaa[i].~Zombie();
        }
    // Free the allocated memory
        operator delete[](hamzaaa);

        //delete[] hamzaaa;
        
}

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