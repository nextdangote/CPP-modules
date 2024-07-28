#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "A Brain was constructed" << std::endl;
}

Brain&  Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        for(int i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    std::cout << "a Brain was copy assigned" << std::endl;
    return (*this);
}

Brain::Brain(const Brain& other)
{
    for(int i = 0; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    std::cout << "A Brain was copy constructed" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "A Brain was destructed" << std::endl;
}