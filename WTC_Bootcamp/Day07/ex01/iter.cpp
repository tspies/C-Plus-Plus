#include <iostream>

template <typename PR>
void printElement(PR const Element)
{
    std::cout << Element << std::endl;
}

template <typename TP>
void iter(TP *array, int len, void (*f)(TP const &))
{
    for (int i = 0; i < len; i++)
        f(array[i]);
}

int main(void)
{
    //Printing an array string array with printElement
    std::cout << std::endl;
    std::string charArray[5] = {"Aaba", "Baba", "Caba", "Daba", "Eaba"};
    std::cout << "String Array:" << std::endl;
    iter(charArray, 5, printElement);
    std::cout << std::endl;

    //Printing an array of intergers with same printElement
    int intArray[5] = {1, 2, 3, 4, 5};
    std::cout << "Integer Array:" << std::endl;
    iter(intArray, 5, printElement);
    return 0;
}