#include <iostream>
#include <ctype.h>

int main(int ac, char **av)
{
    int i;
    int b;

    i = 1;
    if (ac == 1)
    {
        std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE*\n";
        exit(0);
    }
    while (av[i] != NULL)
    {
        b = 0;
        while (av[i][b] != '\0')
        {
            std::cout << (char)toupper(av[i][b]);
            b++;
        }
        i++;
        if (av[i] == NULL)
            break ;
        std::cout << " ";
    }
    std::cout << "\n";
    return (0);
}