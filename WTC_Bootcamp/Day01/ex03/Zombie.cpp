#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie()
{
	return ;
}

void Zombie::setName(std::string name)
{	
	this->name = name;
}

void Zombie::setType(std::string type)
{
	this->type = type;
}

void Zombie::announceZom(void)
{
	std::cout << "    < " << this->name << " (" << this->type << ") " << "> Brainnssssss...\n";
}