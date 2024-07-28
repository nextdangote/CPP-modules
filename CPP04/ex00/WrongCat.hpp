#ifndef WRONGCAT_HPP
 #define WRONGCAT_HPP
#include "Animal.hpp"

class WrongCat : public Animal
{
    private:

    public:
    WrongCat();
    ~WrongCat();
    void makeSoundW() const;
    WrongCat(const WrongCat& other);
    WrongCat&    operator=(const WrongCat& other);
};

#endif