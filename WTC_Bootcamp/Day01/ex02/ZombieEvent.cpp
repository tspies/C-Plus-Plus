#include "ZombieEvent.hpp"
#include <string>
#include <iostream>

void ZombieEvent::setZombieType(std::string varType)
{
	this->zom_type = varType;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(zom_type, name));
}

Zombie* ZombieEvent::randomChump()
{
	Zombie* zomzom;
	char namePool[7][10] = {"Ana", "Barbra", "Claire", "Dana", "Dianne", "Lyn", "Bob"};
	int dex = rand() % 6;
	std::string name = namePool[dex];
	this->setZombieType("Crawler");
	zomzom = this->newZombie(namePool[dex]);
	return (zomzom);

}