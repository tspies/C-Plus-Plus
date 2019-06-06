#include "ZombieEvent.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

ZombieEvent::ZombieEvent()
{
	std::cout << "Event CONSTRUCTOR called\n\n";
	return ;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "Event ~DESTRUCTOR called\n";
	return ;
}

void ZombieEvent::setZombieType(std::string varType)
{
	this->zom_type = varType;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(this->zom_type, name));
}

Zombie* ZombieEvent::randomChump()
{
	Zombie* zomzom;
	int dex ;
	int nbr = 6;
	
	srand(time(0));
	dex = rand() % nbr;
	std::string namePool[6] = {"Ana", "Barbra", "Claire", "Dana", "Dianne", "Lyn"};
	this->setZombieType("Crawler");
	zomzom = this->newZombie(namePool[dex]);
	return (zomzom);
}