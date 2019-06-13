#include <iostream>
#include <iomanip>
#include <string>

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        //Parse av[1] as string to use std::st* functions
        std::string avInput = av[1];
        //Precision set to 1, so 0 = 0.0
        std::cout << std::fixed << std::setprecision(1);

        //----------CHAR----------
        try
        {
            char c = std::stoi(avInput);
            if (!isprint(c))
                std::cout << "char: Non displayable" << std::endl;
            else
                std::cout << "char: " << "'" << c << "'" << std::endl;
        }
        catch(std::exception &e)
        {
            std::cout << "char: impossible" << std::endl;
        }
        //----------INT----------
        try
        {
            int x = std::stoi(avInput);
            std::cout << "int: " << x << std::endl;
        }
        catch(std::exception &e)
        {
            std::cout << "int: impossible" << std::endl;
        }
        //----------FLOAT----------
        try
        {
            float fl = std::stof(avInput);
            std::cout << "float: " << fl << "f" << std::endl;
        }
        catch(std::exception &e)
        {
            std::cout << "float: impossible" << std::endl;
        }
        //----------DOUBLE----------
        try
        {
            double dbl = std::stod(avInput);
            std::cout << "double: " << dbl << std::endl;
        }
        catch(std::exception &e)
        {
            std::cout << "double: impossible" << std::endl;
        }
    }
    else
        std::cout << "Inlvaid amount of arguments" << std::endl;
    return 0;
}