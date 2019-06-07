#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixedPointVlaue = 0;
	std::cout << "Default constrctor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointVlaue = obj.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_fixedPointVlaue);
}

void Fixed::setRawBits(int raw)
{
	this->_fixedPointVlaue = raw;
}