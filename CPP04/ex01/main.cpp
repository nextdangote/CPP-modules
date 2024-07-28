#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main(void)
// {
//     Dog doggo;
//     std::cout << "Doggo's type is " << doggo.getType() << std::endl;
//     doggo.setType("BIGGGG DAWGGG");
//     std::cout << "Doggo's type is " << doggo.getType() << std::endl;
//     doggo.makeSound();

//     Cat Pussssssycat;
//     std::cout << "Pussssssycat's type is " << Pussssssycat.getType() << std::endl;
//     Pussssssycat.setType("CatCatLs");
//     std::cout << "Pussssssycat's type is " << Pussssssycat.getType() << std::endl;
//     Pussssssycat.makeSound();
// }

// int main()
// {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     delete j;//should not create a leak
//     delete i;//! it means destructor should make sure to destroy the brain class

//     const Animal*  lotsOfAnimals[100];
//     for(int i = 1; i < 101; i++)
//     {
//         if (i % 2 == 0)
//             lotsOfAnimals[i - 1] = new Dog;
//         else
//             lotsOfAnimals[i - 1] = new Cat;
//     }
//     for(int i = 1; i < 101; i++)
//     {
//         delete lotsOfAnimals[i - 1];
//     }

//     return 0;
// }

int main() {
    const int numAnimals = 10;
    Animal* animals[numAnimals];

    // Create and initialize the array with Dogs and Cats
    for (int i = 0; i < numAnimals; ++i) {
        if (i < numAnimals / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }

    // Perform a deep copy test
    Animal* copiedAnimals[numAnimals];
    for (int i = 0; i < numAnimals; ++i) {
        if (i < numAnimals / 2) {
            copiedAnimals[i] = new Dog(*dynamic_cast<Dog*>(animals[i]));
        } else {
            copiedAnimals[i] = new Cat(*dynamic_cast<Cat*>(animals[i]));
        }
        copiedAnimals[i]->makeSound();
    }

    // Clean up original animals
    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }

    // Clean up copied animals
    for (int i = 0; i < numAnimals; ++i) {
        delete copiedAnimals[i];
    }

    return 0;
}