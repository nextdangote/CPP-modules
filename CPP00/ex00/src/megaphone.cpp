#include <iostream>
#include <cstring>
// spli
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }
    // char *new_str = new char[strlen(argv[1])];


    //std::cout << "this is the length of argv[1] " << strlen(argv[1]) << std::endl;
    for(int k = 1; argv[k] != NULL; k++)
    {
        for (int i = 0; argv[k][i] != '\0'; i++)
        {
            // if ((isspace(argv[k][i - 1]) || i == 0) && (argv[k][i] >= 97 && argv[k][i] <= 122))
            //     argv[k][i] = argv[k][i] - 32;
            // if(!(isspace(argv[k][i - 1]) || i == 0) && (argv[k][i] >= 65 && argv[k][i] <= 90))
            //     argv[k][i] = argv[k][i] + 32;
            if(argv[k][i] >= 97 && argv[k][i] <= 122)
                argv[k][i] = argv[k][i] - 32;
        }
    }
    // (void)new_str;
    int total = 0;
    for(int n = 1; argv[n] != NULL; n++)
    {
        total = total + strlen(argv[n]);
    }

    char *str = new char[total + 1];
    int p = 0;
    for(int l = 1; argv[l] != NULL; l++)
    {
        for(int m = 0; argv[l][m] != 0; m++)
        {
            str[p] = argv[l][m];
            p++;
        }
    }
    str[p] = 0;
    std::cout << str << std::endl;
    // for(int l = 0; argv[l] != NULL; l++)
    // {
    //     std::cout << argv[l];
    //     if (argv[l + 1] != NULL)
    //         std::cout << " ";
    // }
    // std::cout << std::endl;
    return 0;
}