#ifndef ANIMAL_HPP
 #define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
protected :
    std::string type;
public :
    Animal();
    Animal(const Animal& other); // copy constr
    Animal& operator=(const Animal& other); // copy assignment operator
    virtual ~Animal() = 0;
    virtual void    makeSound() const;
    std::string getType(void) const;
    void setType(std::string newType);
};

#endif