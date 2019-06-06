#include <iostream>
#include "Human.hpp"
#include "Brain.hpp"

std::string Human::identify()
{
    return (this->mySmallBrain.identify());
}

Brain Human::getBrain()
{
    return (this->mySmallBrain);
}