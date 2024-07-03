#include "PhonebookClass.hpp"

void    show_instructions(void)
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

std::string get_input()
{
    std::string input;

    std::cout << "> ";
    std::cin >> input;
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

    show_instructions();
    for (int i = 0; i < 1000 && 1; i++)
    {
        input = get_input();
        if (input.empty())
            continue;
        else
            repertoire = repertoire.handle_input(input, repertoire);
    }
}