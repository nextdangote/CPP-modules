#include "Fixed.hpp"
#include <algorithm>
#include <stdexcept>

// const int Fixed::j = 0;

Fixed::Fixed() : fixed_point_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float other)
{
    std::cout << "float constructor called" << std::endl;
    this->fixed_point_value = roundf(other *(1 << fractional_bits));
}

Fixed::Fixed(const int other)
{
    std::cout << "int constructor called" << std::endl;
    this->fixed_point_value = other << fractional_bits;
    // std::copy(other.i, other.j);
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "copy constructor called" << std::endl;
    *this = other;
    // std::copy(other.i, other.j);
}


Fixed& Fixed::operator=(const Fixed& other) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) 
    {
        this->fixed_point_value = other.getRawBits();
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
    return(this->fixed_point_value);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point_value = raw;
}

float Fixed::toFloat(void) const 
{
    return static_cast<float>(this->fixed_point_value) / (1 << fractional_bits);
}

int Fixed::toInt(void) const
{
    return this->fixed_point_value >> fractional_bits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) 
{
    os << obj.toFloat();
    return os;
}
