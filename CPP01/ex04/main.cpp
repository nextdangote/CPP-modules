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

void    find_and_replace(std::string& str, std::string& s1, std::string& s2)
{
    std::string result;
    size_t pos = 0;
    size_t oldPos = 0;

    while ((pos = str.find(s1, oldPos)) != std::string::npos) 
    {
        result.append(str, oldPos, pos - oldPos);
        result.append(s2); 
        oldPos = pos + s1.length(); 
    }
    result.append(str, oldPos, str.length() - oldPos); 
    str = result; 

}

void read_infile(char *file, char *s1, char *s2)
{
    std::string initial_file = file;
    std::ifstream infile(file);
    std::string new_extension = "replace";
    std::string replace;
    std::string source = s1;
    std::string change = s2;

    replace = initial_file.substr(0, initial_file.length() - 3) + new_extension;
    std::ofstream   outfile(replace.c_str(), std::ios::binary);
    if (!outfile.is_open())
    {
        std::cout << "could not get opened" << std::endl;
    }
    std::string line;
    // size_t  position;
    while (std::getline(infile, line))
    {
        find_and_replace(line, source, change);
        outfile << line << std::endl;
    }
    // infile.seekg(0, std::ios::beg);
    // outfile << infile.rdbuf();
    infile.close();
    outfile.close();
    (void)s1;
    (void)s2;
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        //std::cout << argv[1] << std::endl;
        if (!check_input(argv))
        {
            std::cout << "could not get opened" << std::endl;
            return (0);
        }
        //std::fstream infile(argv[1]);
        read_infile(argv[1], argv[2], argv[3]);
        return (0);
    }
    else
    {
        std::cout << " like thaaat : ./QueLaWin file string1 string2";
        return (1);
    }
}