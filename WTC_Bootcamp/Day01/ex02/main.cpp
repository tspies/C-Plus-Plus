#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	Zombie* brainbuster;
	Zombie* bonecrusher;
	ZombieEvent zomEvent;

	brainbuster = zomEvent.randomChump;
	std::cout << brainbuster->announce() << std::endl;
	return 0;
}