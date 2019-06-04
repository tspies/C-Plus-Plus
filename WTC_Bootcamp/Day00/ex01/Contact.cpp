#include <iostream>
#include <stdlib.h>
#include <string>
#include "Contact.hpp"

Contact::Contact()
{
	valid = 0;
}

void Contact::addContact(void)
{
	std::cout << std::string(50, '\n');
	std::cout << "Please input a First Name: \n";
	std::getline(std::cin, first_name);
	std::cout << "Please input a Last Name: \n";
	std::getline(std::cin, last_name);
	std::cout << "Please input a telephone number: \n";
	std::getline(std::cin, number);
	std::cout << "Contact Added!\n\n";
	std::cin.get();
	std::cout << "Waiting for commands... (Type 'c' to show commands)\n";
	valid = 1;
}

void Contact::showDetails(void)
{
	if (valid != 0)
	{
		std::cout << first_name << std::endl;
		std::cout << last_name << std::endl;
		std::cout << number << std::endl;
		std::cin.get();
		std::cout << "Waiting for commands... (Type 'c' to show commands)\n";
	}
	else
	{
		std::cout << "Thats Record does not exist!\n";
		std::cout << "Waiting for commands... (Type 'c' to show commands)\n";
		std::cin.get();

	}
}