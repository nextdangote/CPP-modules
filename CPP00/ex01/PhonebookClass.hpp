#ifndef PHONEBOOKCLASS_HPP
 #define PHONEBOOKCLASS_HPP
#include "ContactClass.hpp"

class Phonebook
{
	private:
	Contact contact[8];
	static int  i;

	public:
	Phonebook();
	~Phonebook();
	Phonebook	handle_input(std::string str, Phonebook repertoire);
	void	search(void);
	void	display_contacts(Phonebook repertoire);
};

#endif