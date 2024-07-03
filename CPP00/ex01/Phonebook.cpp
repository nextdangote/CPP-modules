#include "PhonebookClass.hpp"

Phonebook    Phonebook::handle_input(std::string str, Phonebook repertoire)
{
    Contact contact;

    if (str == "ADD")
    {
        repertoire.contact[i] = contact.add();
        repertoire.i++;
        if (repertoire.i == 9)
            repertoire.i = 0;
        return (repertoire);
    }
    return(repertoire);
}

int Phonebook::i = 0;

Phonebook::Phonebook(void)
{
    //std::cout << "Phonebook constructed" << std::endl;
}

Phonebook::~Phonebook(void)
{
    //std::cout << "Phonebook destructed" << std::endl;
}

