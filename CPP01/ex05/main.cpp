#include <string>
#include <iostream>
#include <limits>
#include "Harl.hpp"

int main(void)
{
    std::cout << "The program can start to be built" << std::endl;
    std::string test1 = "DEBUG";
    std::string test2 = "WARNING";
    std::string test3 = "INFO";
    std::string test4 = "ERROR";
    Harl    testinstance;
    testinstance.complain(test1);
    testinstance.complain(test2);
    testinstance.complain(test3);
    testinstance.complain(test4);
    testinstance.complain("HEY");
    return (1);
}