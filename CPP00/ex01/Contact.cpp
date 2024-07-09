#include "ContactClass.hpp"
void	Contact::show(int i)
{
	if ( i == 1)
	{
		std::cout << this->FirstName << std::endl;
	}
}

Contact Contact::add(void)
{
    Contact person;
	int flag = 0;
	
	while (flag == 0)
	{
		std::cout << "> First Name :";
        std::cin >> person.FirstName;
		if (person.FirstName.length() == 0)
			std::cout << "Please enter a Valid name" << std::endl;
		else
			flag = 1;
	}
	flag = 0;
	while (flag == 0)
	{
		std::cout << "> Last Name :";
        std::cin >> person.LastName;
		if (person.FirstName.length() == 0)
			std::cout << "Please enter a Valid name" << std::endl;
		else
			flag = 1;
	}
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
