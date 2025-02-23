#ifndef FIXED_HPP
 #define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int                 fixed_point_value;
    const static int    fractional_bits = 8;

public:
    Fixed();
    Fixed(const int other);
    Fixed(const float other);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    //comparison >, <, >=, <=, == and !=
    bool    operator==(const Fixed& other) const;
    bool    operator>=(const Fixed& other) const;
    bool    operator<=(const Fixed& other) const;
    bool    operator!=(const Fixed& other) const;
    bool    operator>(const Fixed& other) const;
    bool    operator<(const Fixed& other) const;

    // calculus
    Fixed   operator+(const Fixed& other) const;
    Fixed   operator*(const Fixed& other) const;
    Fixed   operator-(const Fixed& other) const;
    Fixed   operator/(const Fixed& other) const;

    // increment
    //Fixed Fixed::operator++();
    Fixed&  operator++();
    Fixed   operator++(int);
    Fixed   operator--();
    Fixed&  operator--(int);

    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
    static  Fixed&  max(Fixed& a, Fixed& b);
    static  Fixed&  min(Fixed& a, Fixed& b);
    static  const Fixed&  max(const Fixed& a, const Fixed& b);
    static  const Fixed&  min(const Fixed& a, const Fixed& b);
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);
//std::
#endif