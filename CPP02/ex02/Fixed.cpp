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

Fixed  Fixed::operator+(const Fixed& other) const
{
    Fixed   added;

    // added.setRawBits(this->fixed_point_value + other.getRawBits());
    added.setRawBits(this->fixed_point_value + other.fixed_point_value);
    return (added);
}


Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed   multiplied;

    // added.setRawBits((this->fixed_point_value * other.getRawBits()) >> fractional_bits);
    multiplied.setRawBits((this->fixed_point_value * other.fixed_point_value) >> fractional_bits);
    return (multiplied);
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed   substracted;

    // added.setRawBits(this->fixed_point_value + other.getRawBits());
    substracted.setRawBits(this->fixed_point_value - other.fixed_point_value);
    return (substracted);
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed   divided;

    // added.setRawBits(this->fixed_point_value + other.getRawBits());
    divided.setRawBits((this->fixed_point_value << fractional_bits) / other.fixed_point_value);
    return (divided);
}

Fixed Fixed::operator++(int)
{
    Fixed oldCopy;

    oldCopy = *this;
    this->fixed_point_value = this->fixed_point_value + 1;
    return (oldCopy);
}

Fixed& Fixed::operator++()
{
    this->fixed_point_value++;
    return (*this);
}

Fixed Fixed::operator--()
{
    this->fixed_point_value--;
    return (*this);
}

Fixed& Fixed::operator--(int)
{
    // Fixed oldCopy;

    // oldCopy = *this;
    this->fixed_point_value--;
    // this->setRawBits(this->getRawBits() - 1);
    return (*this);
}


bool Fixed::operator==(const Fixed& other) const
{
    return (this->fixed_point_value == other.fixed_point_value);
}

bool Fixed::operator>=(const Fixed& other) const
{
    return (this->fixed_point_value >= other.fixed_point_value);
}

bool Fixed::operator<=(const Fixed& other) const
{
    return (this->fixed_point_value <= other.fixed_point_value);
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (this->fixed_point_value != other.fixed_point_value);
}

bool Fixed::operator>(const Fixed& other) const
{
    return (this->fixed_point_value > other.fixed_point_value);
}

bool Fixed::operator<(const Fixed& other) const
{
    return (this->fixed_point_value < other.fixed_point_value);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) 
{
    os << obj.toFloat();
    return os;
}

Fixed&  Fixed::max(Fixed& a, Fixed& b)
{
    return(a > b) ? a : b;
}

Fixed&  Fixed::min(Fixed& a, Fixed& b)
{
    return(a > b) ? b : a;
}

const Fixed&  Fixed::max(const Fixed& a, const Fixed& b)
{
    return(a > b) ? a : b;
}

const Fixed&  Fixed::min(const Fixed& a,const Fixed& b)
{
   return(a > b) ? b : a;
}