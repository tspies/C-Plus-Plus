#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
    std::cout << "Creating Zombie Horde...\n";
    ZombieHorde Horde_1 = ZombieHorde(4);
    std::cout << "Announcing your zombie horde...\n";
    Horde_1.announce();
}