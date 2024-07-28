#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    this->type = "Cat";
    // brain = new  Brain;
    theBrain = new Brain;
    std::cout << "A Kitty was created" << std::endl;
}

Cat::~Cat(void)
{
    delete theBrain;
    std::cout << "A Kitty was Destructed" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "MEOOOOWWWWWW" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->theBrain = new Brain(*other.theBrain);
    std::cout << "copy constructor for cat was called" << std::endl;
}

Cat&    Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        delete theBrain;
        this->type = other.type;
        this->theBrain = new Brain(*other.theBrain);
        std::cout << "copy assignment operator for cat was called";
    }
    return *this;
}