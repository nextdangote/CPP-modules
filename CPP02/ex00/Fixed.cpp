#include "Fixed.hpp"
#include <algorithm>
#include <stdexcept>

// const int Fixed::j = 0;
Fixed::Fixed(void) : i(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : i(other.i)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    // std::copy(other.i, other.j);
}

Fixed& Fixed::operator=(const Fixed& other) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) 
    {
        this->i = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->i);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->i=raw;
}
