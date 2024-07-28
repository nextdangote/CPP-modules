#ifndef WRONGANIMAL_HPP
 #define WRONGANIMAL_HPP
#include <string>
#include <iostream>

class WrongAnimal
{
protected :
    std::string type;
public :
    WrongAnimal();
    virtual ~WrongAnimal();
    void    makeSoundW() const;
    std::string getType(void) const;
    void setType(std::string newType);
};

#endif