#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    Bureaucrat Bob("Bob", 125);
    Bureaucrat Tim("Tim", 75);
    Bureaucrat Sam("Sam", 1);

    Form legal;
    Form domestic;
    Form pvt;

    Form President("PVT", "President", 25, 5);
    Form Robot("Clank", "Robot", 72, 45);
    Form Tree("Home", "Tree", 145, 137);
    std::cout << std::endl;
    std::cout << legal << std::endl;
    std::cout << domestic << std::endl;
    std::cout << pvt << std::endl << std::endl;

    // Bob attempt -----------------------------------------
    // try
    // {
    //     Bob.signForm(legal.getName(), legal.getSignGrade());
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // try
    // {
    //     Bob.signForm(domestic.getName(), domestic.getSignGrade());
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // try
    // {
    //    Bob.signForm(pvt.getName(), pvt.getSignGrade());
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << std::endl;
    
    // // Tim attempt -----------------------------------------------
    // try
    // {
    //     Tim.signForm(legal.getName(), legal.getSignGrade());
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // try
    // {
    //     Tim.signForm(domestic.getName(), domestic.getSignGrade());
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // try
    // {
    //    Tim.signForm(pvt.getName(), pvt.getSignGrade());
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << std::endl;

    // // Sam attempt -----------------------------------------------
    // try
    // {
    //     Sam.signForm(legal.getName(), legal.getSignGrade());
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // try
    // {
    //     Sam.signForm(domestic.getName(), domestic.getSignGrade());
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // try
    // {
    //    Sam.signForm(pvt.getName(), pvt.getSignGrade());
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    Sam.signForm(Robot);
    Sam.exeForm(Robot);

    Bob.signForm(Robot);

    Sam.signForm(Tree);
    Sam.exeForm(Tree);
}