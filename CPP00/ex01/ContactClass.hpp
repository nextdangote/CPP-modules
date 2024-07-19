#ifndef CONTACT_CLASS_HPP
 #define CONTACT_CLASS_HPP
#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <limits>

class   Contact
{
    private:
    std::string LastName;
    std::string FirstName;
    std::string DarkestSecret;
    std::string PhoneNumber;
    std::string Nickname;

    public:
    Contact();
    ~Contact();
    Contact add();
    void    show(int i);
    int     check_number(std::string str);
    void	write_first_nine(std::string str);
    int     check_empty(void);
    void    display(void);
    void    show_instructions(void);
};

#endif