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

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete j;
    delete i;
    delete meta;

    std::cout << std::endl << "now the wrong animals :" << std::endl;
    const WrongAnimal* metaverse = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();
    // std::cout << j->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    k->makeSoundW();
    metaverse->makeSoundW();

    delete k;
    // delete i;
    delete metaverse;
    return 0;
}