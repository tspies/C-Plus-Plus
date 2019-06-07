#include <iostream>
#include "FragTrap.hpp"

int main()
{
    FragTrap Bot1("Bob");
    FragTrap Bot2("Tim");

    Bot1.rangedAttack(Bot2.fetchName());
    return 0;
}