#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "An ANIMALLLL was created" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "An ANIMALLLL was Destructed" << std::endl;
    //delete this;
}

std::string Animal::getType(void) const
{
    return(this->type);
}

void    Animal::setType(std::string newType)
{
    this->type = newType;
}

void    Animal::makeSound(void) const
{
    // if (this->type == "Cat")
    // {
    //     std::cout << "MEOOOOWWWWWW" << std::endl;
    // }

    // if (this->type == "Dog")
    // {
    //     std::cout << "I AMMMM A REALLLL DAWGGG" << std::endl;
    // }
    std::cout << "Generic animal sound : BRAAAAAA" << std::endl;
}

Animal::Animal(const Animal& other) :  type(other.type)
{
    std::cout << "Copy constructor called" << std::endl;
}

Animal&  Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}