#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
    // std::cout << "Hello world how are you doing" << std::endl;
    // Fixed  a;
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}