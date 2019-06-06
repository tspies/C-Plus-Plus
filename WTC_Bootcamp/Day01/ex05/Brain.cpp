#include <sstream>
#include "Brain.hpp"

Brain::Brain()
{
    std::cout << " Brain Constructor Called \n\n";
    std::stringstream brainLocation;

    // Allocation of address to stringstream object;
    brainLocation << this;
    // .str() used to access string withing brainLocation object;
    this->brainAddress = brainLocation.str();
    return ;
}

Brain::~Brain()
{
    std::cout << " Brain Deconstructor Called\n";
    return ;
}

std::string Brain::identify()
{
    return (this->brainAddress);
}