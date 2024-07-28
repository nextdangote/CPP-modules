#ifndef Brain_HPP
 #define Brain_HPP
#include <string>
#include <iostream>

class Brain
{
protected :
    std::string ideas[100];
public :
    Brain(const Brain& other);
    Brain&  operator=(const Brain& other);
    Brain();
    virtual ~Brain();
};

#endif