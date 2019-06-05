#include <iostream>
#include <cctype>

void capitalize(char *av)
{
    int y = -1;
    char upped;

        while (av[++y])
        {   
            if (av[y] >= 'a' && av[y] <= 'z')
                upped = (char)toupper(av[y]);
            else
               upped = av[y];
            std::cout << upped;
        }
};

int main(int ac, char **av)
{
    int x = 0;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 0;
    
    }
    while (av[++x])
    {
        capitalize(av[x]);
    }
    std::cout << std::endl;
    return 0;
}

