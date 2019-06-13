#include <iostream>
#include "Bureaucrat.hpp"
int main()
{
    Bureaucrat Bob("Bob", 150);
    Bureaucrat Tim("Tim", 1);
    Bureaucrat Sam("Sam", 1);

    std::cout << Bob << std::endl;
    std::cout << Tim << std::endl;
    std::cout << Sam << std::endl << std::endl;

    Bob.setName("Bobbobobobo");
    // Force too low, Bob's grade is Lowest = 150
    try
    {
        Bob.downGrade();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // Force too high, Tim's grade is Highest = 1
    try
    {
        Tim.upGrade();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // Force too high, Sam's vaules = Tims
    try
    {
        Sam.upGrade();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // These will all pass throwwing no exceptions
    try
    {
        Bob.upGrade();
        Tim.downGrade();
        Sam.downGrade();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;;
    std::cout << Bob << std::endl;
    std::cout << Tim << std::endl;
    std::cout << Sam << std::endl;
    return 0;
}