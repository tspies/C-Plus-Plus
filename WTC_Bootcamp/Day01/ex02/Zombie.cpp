#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string type, std::string name)
{
	std::cout << "  Zombie CONSTRUCTOR called\n\n";
	std::cout << "    Setting Zombie Type: " << type << std::endl;
	this->type = type;
	std::cout << "    Setting Zombie Name: " << name << std::endl;
	this->name = name;
	return ;
}

Zombie::~Zombie()
{
	std::cout << "    Zombie ~DESTRUCTOR called\n";
	return ;
}

std::string Zombie::announce(void)
{
	std::string message = "    < " + this->name + " (" + this->type + ") " + "> Brainnssssss...\n";
	return (message);
}