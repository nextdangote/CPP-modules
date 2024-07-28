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
