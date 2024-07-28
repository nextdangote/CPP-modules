#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << "A Kitty was created" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "A Kitty was Destructed" << std::endl;
    //delete this;
}

void    WrongCat::makeSoundW(void) const
{
    std::cout << "MEOOOOWWWWWW" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : Animal(other)
{
    std::cout << "copy constructor for cat was called" << std::endl;
}

WrongCat&    WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        this->type = other.type;
        std::cout << "copy assignment operator for cat was called";
    }
    return *this;
}