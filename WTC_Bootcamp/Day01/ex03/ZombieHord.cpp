#include <iostream>
#include <cstdlib>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

    ZombieHorde::ZombieHorde(int N)
    {
        this->hordeCount = N;
        // Create a Array/Horde of Zombies
        this->zombieArray = new Zombie[this->hordeCount];
        //Setting Zombie Name and Type
        for (int i = this->hordeCount; i >= 0; i--)
        {
            zombieArray[i].setName(randomChump(rand() % hordeCount));
            zombieArray[i].setType("Crawler");
        }
        return ;
    }

    ZombieHorde::~ZombieHorde()
    {
        std::cout << "Wiping out the horde" << std::endl;
        delete [] this->zombieArray;
        return ;
    }

    std::string ZombieHorde::randomChump(int index)
    {
        std::string namePool[6] = {"Ana", "Barbra", "Claire", "Dana", "Dianne", "Lyn"};
        std::string name = namePool[index];
        return (name);
    }

    void ZombieHorde::announce()
    {
        for (int i = this->hordeCount; i >= 0; i--)
            this->zombieArray[i].announceZom();
    }
