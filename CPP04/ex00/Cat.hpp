#ifndef CAT_HPP
 #define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
    private:

    public:
    Cat();
    ~Cat();
    void makeSound() const;
    Cat(const Cat& other);
    Cat&    operator=(const Cat& other);
};

#endif