#include <iostream>

void memoryLeak()
{
	std::string *panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	// function allocated on the heap, manual deletion required
	delete panthere;
}
