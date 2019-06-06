#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	Zombie* brainbuster;
	Zombie* bonecrusher;
	ZombieEvent zomEvent;

	std::cout << "Creating Zombie on the stack named 'Fred' and type 'Dumbass':\n";
	Zombie stackZombie("Dumbass", "Fred");
	std::cout << stackZombie.announce();
	std::cout << "    ---------------------" << std::endl;
	brainbuster = zomEvent.randomChump();
	std::cout << brainbuster->announce() << std::endl;
	std::cout << "    ---------------------" << std::endl;
	bonecrusher = zomEvent.randomChump();
	std::cout << bonecrusher->announce() << std::endl;
	std::cout << "    ---------------------" << std::endl;
	std::cout << "  Deleting Brainbuster --HEAP ZOMBIE\n";
	delete brainbuster;
	std::cout << "  Deleting Bonecrusher --HEAP ZOMBIE\n";
	delete bonecrusher;
	std::cout << "  Program finished, automaticalled calling --STACK ZOMBIE ~destructor\n";
	return 0;
}