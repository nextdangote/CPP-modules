#include <string>
#include <iostream>
#include <limits>
#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "The program needs one string" << std::endl;
        return 0;
    }
    std::string test1 = argv[1];
    std::string test2 = "INFO";
    std::string test3 = "ERROR";
    std::string test4 = "WARNING";
    Harl    testinstance;

    // testinstance.complain(argv)
    testinstance.complain(test1);
    // testinstance.complain(test2);
    // testinstance.complain(test3);
    // testinstance.complain(test4);
    // testinstance.complain("HEY");
    return (1);
}