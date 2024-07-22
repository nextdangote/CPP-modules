#include <string>
#include <iostream>
#include <fstream>

bool    check_input(char **args)
{
    std::string str = args[1];
    std::string extension_check;
    if (str.length() > 4)
    {
        extension_check = str.substr(str.length() - 4);
    }
    else
        return (0);
    if (extension_check != ".txt")
        return (0);
    std::ifstream infile(args[1]);
    if (!infile.is_open())
    {
        return (0);
    }
    else
    {
        infile.close();
        return (1);
    }
}

std::fstream read_infile(std::fstream infile, char *s1, char *s2)
{
    
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        //std::cout << argv[1] << std::endl;
        if (!check_input(argv))
            return (0);
        std::fstream infile(argv[1]);
        read_infile(infile, argv[2], argv[3]);
        return (0);
    }
    else
    {
        std::cout << " like thaaat : ./QueLaWin file string1 string2";
        return (1);
    }
}