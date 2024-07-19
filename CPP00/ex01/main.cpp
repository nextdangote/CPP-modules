#include "PhonebookClass.hpp"

// void    show_instructions(void)
// {
//     std::cout << std::endl;
//     std::cout << "   📣 WELCOME IN THE PHONEBOOK 📣   " << std::endl;
//     std::cout << "             Instructions :" << std::endl;
//     std::cout << "________________________________________" << std::endl << std::endl;
//     std::cout << "To add a new contact type :       ADD" << std::endl;
//     std::cout << "To search for a contact type :    SEARCH" << std::endl;
//     std::cout << "To exit the Phonebook type :      EXIT" << std::endl;
//     std::cout << "________________________________________" << std::endl << std::endl;
//     std::cout << "🔔 Any other input will be ignored, respect the letter case ! 🔔" << std::endl;
// }

std::string get_input()
{
    std::string input;

    std::cout << "> ";
    std::getline(std::cin, input);
    if (std::cin.eof() || std::cin.fail()) 
	{
        std::cerr << "ctrl d detected... exittttt" << std::endl;
        exit(1);
    }
    if (!input.length() || (input != "ADD" && input != "EXIT" && input != "SEARCH"))
    {
        input = "";
        return (input);
    }
    else
        return (input);
}

int main(void)
{
    Phonebook   repertoire;
    std::string input;
    Contact random;

    random.show_instructions();
    for (int i = 0; i < 10000 && 1; i++)
    {
        input = get_input();
        if (input.empty())
            continue;
        else
            repertoire = repertoire.handle_input(input, repertoire);
    }
}

// to fix :
// ! having to press 2 times on enter to go to the next input
// ! when pressing on enter after a completion of a contact no more > 