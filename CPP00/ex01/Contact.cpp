#include "ContactClass.hpp"

void    Contact::show_instructions(void)
{
    std::cout << std::endl;
    std::cout << "   📣 WELCOME IN THE PHONEBOOK 📣   " << std::endl;
    std::cout << "             Instructions :" << std::endl;
    std::cout << "________________________________________" << std::endl << std::endl;
    std::cout << "To add a new contact type :       ADD" << std::endl;
    std::cout << "To search for a contact type :    SEARCH" << std::endl;
    std::cout << "To exit the Phonebook type :      EXIT" << std::endl;
    std::cout << "________________________________________" << std::endl << std::endl;
    std::cout << "🔔 Any other input will be ignored, respect the letter case ! 🔔" << std::endl;
}

int     Contact::check_number(std::string str)
{
	//
	if (str[0] != 48)
		return (0);
	for (long unsigned int i = 1; i < str.length(); i++)
	{
		if (str[i] < 48 || str[i] > 57)
			return(0);
	}
	return (1);
}

void	Contact::write_first_nine(std::string str)
{
	int i = 0;

	while(i < 9)
	{
		std::cout << str[i];
		i++;
	}
	std::cout << ".|";
}

void	print_spaces(int i)
{
	int j = 0;

	while (j < i)
	{
		std::cout << " ";
		j++;
	}
}

int	Contact::check_empty(void)
{
	if (this->FirstName.length() == 0)
		return (0);
	else
		return (1);
}

void	Contact::display(void)
{
	std::cout << "> First Name : " << this->FirstName << std::endl;
	std::cout << "> Last Name : " << this->LastName << std::endl;
	std::cout << "> Nickname : " << this->Nickname << std::endl;
	std::cout << "> Phone Number : " << this->PhoneNumber << std::endl;
	std::cout << "> Darkest Secret : " << this->DarkestSecret << std::endl;
}

void	Contact::show(int i)
{
	int	tmp;

	tmp = 0;
	if (this->FirstName.length() == 0)
		return;
	else
		std::cout << "         " << i << "|";

	if (this->FirstName.length() > 10)
		this->write_first_nine(this->FirstName);
	else
	{
		tmp = 10 - this->FirstName.length();
		print_spaces(tmp);
		std::cout << this->FirstName << "|";
	}
	if (this->LastName.length() > 10)
		this->write_first_nine(this->LastName);
	else
	{
		tmp = 10 - this->LastName.length();
		print_spaces(tmp);
		std::cout << this->LastName << "|";
	}
	if (this->LastName.length() > 10)
		this->write_first_nine(this->LastName);
	else
	{
		tmp = 10 - this->LastName.length();
		print_spaces(tmp);
		std::cout << this->LastName << "|";
	}
	std::cout << std::endl;
}

// void	Contact::show(int i)
// {
// 	std::cout << "     index|" << "first name|" << " last name|" << "  nickname|" << std::endl;
// 	std::cout << "_____________________________________________" << std::endl;
// 	int	index = 0;
// 	int tmp = 0;
// 	while((this->Contacts[index].First_Name) != 0)
// 	{
// 		std::ostringstream oss;
// 		oss << index;
// 		std::string indexstr = oss.str();
// 		std::cout << "         " << indexstr << "|";
// 		// std::cout << "         " << std::to_string(index) << "|";
// 		if (strlen(repertoire.Contacts[index].First_Name) > 10)
// 			write_first_nine(this->First_Name);
// 		else
// 		{
// 			tmp = 10 - strlen(repertoire.Contacts[index].First_Name);
// 			print_spaces(tmp);
// 			std::cout << repertoire.Contacts[index].First_Name << "|";
// 		}
// 		if (strlen(repertoire.Contacts[index].Last_Name) > 10)
// 			write_first_nine(repertoire.Contacts[index].Last_Name);
// 		else
// 		{
// 			tmp = 10 - strlen(repertoire.Contacts[index].Last_Name);
// 			print_spaces(tmp);
// 			std::cout << repertoire.Contacts[index].Last_Name << "|";
// 		}
// 		if (strlen(repertoire.Contacts[index].nickname) > 10)
// 		{
// 			write_first_nine(repertoire.Contacts[index].nickname);
// 			std::cout << std::endl;
// 		}
// 		else
// 		{
// 			tmp = 10 - strlen(repertoire.Contacts[index].nickname);
// 			print_spaces(tmp);
// 			std::cout << repertoire.Contacts[index].nickname << "|" << std::endl;
// 		}
// 		index++;
// 	}
// 	std::cout << "> Choose the index of the person you want to see the info from" << std::endl;
// }


Contact Contact::add(void)
{
    Contact person;
	int flag = 0;

	// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	while (flag == 0)
	{
		std::cout << "> First Name :";
        std::getline(std::cin, person.FirstName);
		if (std::cin.eof() || std::cin.fail()) 
		{
            std::cerr << "ctrl d detected... exittttt" << std::endl;
            exit(1);
        }
		if (person.FirstName.length() == 0)
		{
			std::cout << "> Please enter a Valid First name" << std::endl;
			continue;
		}
		else
			flag = 1;
	}
	flag = 0;

	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (flag == 0)
	{
		std::cout << "> Last Name :";
        std::getline(std::cin, person.LastName);
		if (std::cin.eof() || std::cin.fail()) 
		{
            std::cerr << "ctrl d detected... exittttt" << std::endl;
            exit(1);
        }
		if (person.LastName.length() == 0)
			std::cout << "> Please enter a Valid Last name" << std::endl;
		else
			flag = 1;
	}
	flag = 0;
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	while (flag == 0)
	{
		std::cout << "> Nick Name :";
        std::getline(std::cin, person.Nickname);
		if (std::cin.eof() || std::cin.fail()) 
		{
            std::cerr << "ctrl d detected... exittttt" << std::endl;
            exit(1);
        }
		if (person.Nickname.length() == 0)
		{
			std::cout << "> Please enter a Valid Nickname" << std::endl;
			continue;
		}
		else
			flag = 1;
	}
	flag = 0;
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	while (flag == 0)
	{
		std::cout << "> Phone Number :";
        std::getline(std::cin, person.PhoneNumber);
		if (std::cin.eof() || std::cin.fail()) 
		{
            std::cerr << "ctrl d detected... exittttt" << std::endl;
            exit(1);
        }
		if (person.PhoneNumber.length() == 0 || !person.check_number(person.PhoneNumber)) // check if it is a number
			std::cout << "> Please enter a Valid Phone Number" << std::endl;
		else
			flag = 1;
	}
	flag = 0;

	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (flag == 0)
	{
		std::cout << "> Darkest secret :";
        std::getline(std::cin, person.DarkestSecret);
		if (std::cin.eof() || std::cin.fail()) 
		{
            std::cerr << "ctrl d detected... exittttt" << std::endl;
            exit(1);
        }
		if (person.DarkestSecret.length() == 0)
		{
			std::cout << "> Please enter a Valid secret" << std::endl;
			continue;
		}
		else
			flag = 1;
	}
	std::cout << "> Contact created" << std::endl;
    show_instructions();
	return(person);
}

Contact::Contact(void)
{
    //std::cout << "Contact constructed" << std::endl;
}

Contact::~Contact(void)
{
    //std::cout << "Contact destructed" << std::endl;
}
