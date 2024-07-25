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
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif