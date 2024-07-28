#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << "A Dawggg was created" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "A Dawggg was Destructed" << std::endl;
    //delete this;
}

// std::string Dog::getType(void)
// {
//     return(this->type);
// }

// void    Dog::setType(std::string newType)
// {
//     this->type = newType;
// }

void    Dog::makeSound(void) const
{
    std::cout << "WAFFF I AMMMM A REALLLL DAWGGG" << std::endl;
    //delete this;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    theBrain = new Brain(*other.theBrain);
    type = other.type;
    std::cout << "a DAWGGG has been copy constructed" << std::endl;
}

Dog&    Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        // for (int i = 0; i < 100; i++)
        // {
            // 
        // }
        this->type = other.type;
    }
    return *this;
}