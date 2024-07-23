#ifndef FIXED_HPP
 #define FIXED_HPP
#include <iostream>
#include <string>

class Fixed
{
private:

public:
    Fixed();                          // Default Constructor
    Fixed(const Fixed& other);         // Copy Constructor
    Fixed& operator=(const Fixed& other); // Copy Assignment Operator
    ~Fixed();
    std::string getRawBits(void);
};

#endif