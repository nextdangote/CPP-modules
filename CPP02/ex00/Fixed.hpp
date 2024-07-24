#ifndef FIXED_HPP
 #define FIXED_HPP
#include <iostream>
#include <string>

class Fixed
{
private:
    int                 i;
    const static int    j = 8;

public:
    Fixed();                          // Default Constructor
    Fixed(const Fixed& other);         // Copy Constructor
    Fixed& operator=(const Fixed& other); // Copy Assignment Operator
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits( int const raw );
};

#endif