#include "PhonebookClass.hpp"
#include <unistd.h>

// void    Phonebook::search(void)
// {
// 	std::string	str;
// 	int index;
// 	int flag;

// 	flag = 0;
// 	index = 0;
// 	std::cout << "> Please choose the index of the contact you would like to see (between 0 and 7)" << std::endl;
// 	while (flag == 0)
// 	{
// 		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
// 		std::getline(std::cin, str);
// 		if (str.length() > 1 || str[0] < 48 || str[0] > 55)
// 		{
// 			std::cout << "> Choose an existing contact" << std::endl;
// 			continue;
// 		}
// 		else
// 		{
// 			index = str[0] - '0';
// 			this->contact[index].display();
// 			flag = 1;
// 		}
// 	}
// }


void Phonebook::search(void)
{
    std::string str;
    int index;
    bool valid_input = false;

    std::cout << "> Please choose the index of the contact you would like to see (between 0 and 7)" << std::endl;

    while (!valid_input)
    {
		std::cin.clear();
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::getline(std::cin, str);
		if (std::cin.eof() || std::cin.fail()) 
		{
            std::cerr << "ctrl d detected... exittttt" << std::endl;
            exit(1);
        }
		index = str[0] - '0';
        // Check if the input is a single digit between '0' and '7'
        if (str.length() == 1 && str[0] >= '0' && str[0] <= '7' && this->contact[index].check_empty())
        {
            this->contact[index].display();
			// usleep(3500000);
			// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			// this->contact->show_instructions();
            return;
        }
        else
        {
            std::cout << "> Choose an existing contact" << std::endl;
			continue;
        }
    }
}

void	Phonebook::display_contacts(Phonebook repertoire)
{
	std::cout << "     index|" << "first name|" << " last name|" << "  nickname|" << std::endl;
	std::cout << "_____________________________________________" << std::endl;
	int i;

	i = 0;
	while (i < 8 && repertoire.contact[i].check_empty())
	{
		repertoire.contact[i].show(i);
		std::cout << "_____________________________________________" << std::endl;
		i++;
	}
}

Phonebook    Phonebook::handle_input(std::string str, Phonebook repertoire)
{
	Contact contact;

	if (str == "ADD")
	{
		repertoire.contact[repertoire.i] = contact.add();
		repertoire.i++;
		if (repertoire.i == 8)
			repertoire.i = 0;
		return (repertoire);
	}
	if (str == "EXIT")
		exit(EXIT_SUCCESS);
	if (str == "SEARCH")
	{
		if (!repertoire.contact[0].check_empty())
		{
			std::cout << "> The Phonebook is currently empty" << std::endl;
			return (repertoire);
		}
		repertoire.display_contacts(repertoire);
		repertoire.search();
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

