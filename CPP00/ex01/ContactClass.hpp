#ifndef CONTACT_CLASS_HPP
 #define CONTACT_CLASS_HPP
#include <iostream>
#include <cstring>
#include <string>

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
};

#endif