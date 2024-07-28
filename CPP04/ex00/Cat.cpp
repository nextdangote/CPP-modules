#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << "A Kitty was created" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "A Kitty was Destructed" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "MEOOOOWWWWWW" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "copy constructor for cat was called" << std::endl;
}

Cat&    Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        this->type = other.type;
        std::cout << "copy assignment operator for cat was called";
    }
    return *this;
}