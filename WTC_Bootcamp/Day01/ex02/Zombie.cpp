#include "Zombie.hpp"
#include <iostream>



std::string Zombie::announce(void)
{
	std::cout << "< " << this->name << " (" << this->type << ") " << ">  Brainnssssssss...\n"; 
}