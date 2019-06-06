#include <iostream>

int main(void)
{
    std::string str = "Hi THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "Display using Pointer: \n";
    std::cout << *ptr << std::endl;
    std::cout << "=---------------------------=\n";
    std::cout << "Display using Reference: \n";
    std::cout << ref << std::endl;
    std::cout << "=---------------------------=\n";
    return 0;
}