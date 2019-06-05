#include <iostream>
#include <stdlib.h>
#include <string>
#include "Contact.hpp"

// Constructor
Contact::Contact()
{
	valid = 0;
}

// Sumbit Contact to phonebook
void Contact::addContact(int dex)
{
		std::cout << std::string(10, '\n');
		std::cout << "Please input a First Name: \n";
		std::getline(std::cin, first_name);
		std::cout << "Please input a Last Name: \n";
		std::getline(std::cin, last_name);
		std::cout << "Please input a nickname: \n";
		std::getline(std::cin, nickname);
		std::cout << "Please input a login: \n";
		std::getline(std::cin, login);
		std::cout << "Please input a Postal Address: \n";
		std::getline(std::cin, postal_address);
		std::cout << "Please input a Email address: \n";
		std::getline(std::cin, email_address);
		std::cout << "Please input a Phone Number: \n";
		std::getline(std::cin, number);
		std::cout << "Please input a Birth Date: \n";
		std::getline(std::cin, birthdate);
		std::cout << "Please input a Favourite Meal: \n";
		std::getline(std::cin, favourite_meal);
		std::cout << "Please input your Underwear Color: \n";
		std::getline(std::cin, underwear_color);
		std::cout << "Please input Darkest Secret: \n";
		std::getline(std::cin, darkest_secret);
		std::cout << "Contact Added!\n";
		std::cout << "Hit Enter to continue\n";
		std::cin.get();
		std::cout << "Waiting for commands... (Type 'c' to show commands)\n";
		valid = 1;
		index = dex;
}

// Display all phonebook contents
void Contact::showPhonebook(void)
{
	if (valid != 0)
	{
		std::cout << "|";
		printField(std::to_string(index));
		printField(first_name);
		printField(last_name);
		printField(nickname);
		std::cout << std::endl;
	}
}

void Contact::printField(std::string field)
{
	int extra_space;
		extra_space = 10 - strlen(field.c_str());
		if (extra_space >= 0){
			for (int space = extra_space; space > 0; space--)
				std::cout << " ";
			std::cout << field;
			std::cout << "|";
		}
		else
		{
			std::cout << field.substr(0, 9);
			std::cout << ".";
			std::cout << "|";
		}
		
}

void Contact::printContact(void)
{
	printFieldSimple(first_name, "First Name");
	printFieldSimple(last_name, "Last Name");
	printFieldSimple(nickname, "Nickname");
	printFieldSimple(login, "Login");
	printFieldSimple(postal_address, "POstal Address");
	printFieldSimple(email_address, "Email Address");
	printFieldSimple(number, "Phone Number");
	printFieldSimple(birthdate, "Birthdate");
	printFieldSimple(favourite_meal, "Favourite Meal");
	printFieldSimple(underwear_color, "Underwear Color");
	printFieldSimple(darkest_secret, "Darkest Secret");
}
void Contact::printFieldSimple(std::string field, std::string message)
{
	std::cout << message << ":\n" << field;
}

int Contact::checkValid(void)
{
	if (valid == 0)
		return 0;
	else
		return 1;
}