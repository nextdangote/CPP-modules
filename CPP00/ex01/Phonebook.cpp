#include "PhonebookClass.hpp"

void    Phonebook::search(void)
{

}

void	Phonebook::display_contacts(Phonebook repertoire)
{
    repertoire.contact[0].show(1);
}

Phonebook    Phonebook::handle_input(std::string str, Phonebook repertoire)
{
    Contact contact;

    if (str == "ADD")
    {
        repertoire.contact[repertoire.i] = contact.add();
        repertoire.i++;
        if (repertoire.i == 9)
            repertoire.i = 0;
        return (repertoire);
    }
    if (str == "EXIT")
        exit(EXIT_SUCCESS);
    if (str == "SEARCH")
    {
        repertoire.display_contacts(repertoire);
        //repertoire.search();
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

