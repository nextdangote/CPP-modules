#ifndef WEAPON_HPP
 #define WEAPON_HPP
#include <iostream>
#include <string>

class   Weapon
{
    private:
    std::string type;

    public:
    const std::string   getType() const;
    void    setType(std::string NewType);
    Weapon(std::string type);
    ~Weapon();
};

#endif