#include <iostream>

void    print_upper(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            std::cout << (char)(str[i] - 'a' + 'A');
        else
            std::cout << str[i];
        i++;
    }
}

int     main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEEDBACK NOISE *" << std::endl;
        return (1);
    }
    for (int i = 1; i < argc; i++)
        print_upper(argv[i]);
    std::cout << std::endl;
}