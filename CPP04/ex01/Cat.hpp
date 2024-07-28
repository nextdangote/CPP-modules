#ifndef CAT_HPP
 #define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
    Brain* theBrain;
    public:
    Cat();
    ~Cat();
    void makeSound() const;
    Cat(const Cat& other);
    Cat&    operator=(const Cat& other);
};

#endif