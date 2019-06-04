#include <iostream>
#include <cctype>

void capitalize(int ac, char **av)
{
    int x = 1;

    while (x < ac)
    {
        int len = strlen(av[x]);
        for (int y = 0; y < len; y++)
        {
            if (isalpha(av[x][y]))
                std::cout << (char)toupper(av[x][y]);
            else
                std::cout << av[x][y];
        }
        x++;
    }
    std::cout << std::endl;
};

int main(int ac, char **av)
{
    char *x;
    x = *av;
    if (ac > 1)
    {
        capitalize(ac, av);
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    }
    return 0;
}