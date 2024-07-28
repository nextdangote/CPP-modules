#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "A WrongAnimalLLL was created" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "A WrongAnimalLLL was Destructed" << std::endl;
    //delete this;
}

std::string WrongAnimal::getType(void) const
{
    return(this->type);
}

void    WrongAnimal::setType(std::string newType)
{
    this->type = newType;
}

void    WrongAnimal::makeSoundW(void) const
{
    // if (this->type == "Cat")
    // {
    //     std::cout << "MEOOOOWWWWWW" << std::endl;
    // }

    // if (this->type == "Dog")
    // {
    //     std::cout << "I AMMMM A REALLLL DAWGGG" << std::endl;
    // }
    std::cout << "GANGGGGG : Generic WrongAnimal sound" << std::endl;
}