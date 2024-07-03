#ifndef PHONEBOOKCLASS_HPP
 #define PHONEBOOKCLASSHPP
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
	Phonebook	init(Phonebook repertoire);
};

#endif