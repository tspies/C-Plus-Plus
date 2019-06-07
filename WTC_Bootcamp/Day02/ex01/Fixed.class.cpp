#include <iostream>
#include <cmath>
#include "Fixed.class.hpp"

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

Fixed::Fixed(const int num)
{
	// Shifting number by fractoral bits "8"
	std::cout << "Int constructor called" << std::endl;
	setRawBits(num << this->_fractionalBits);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(num * (1 << this->_fractionalBits)));
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointVlaue = obj.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &ostream, Fixed const &rhs)
{
	ostream<<rhs.toFloat();
	return (ostream);
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return(this->_fixedPointVlaue);
}

void Fixed::setRawBits(int raw)
{
	this->_fixedPointVlaue = raw;
}

int Fixed::toInt(void) const
{
	// Shifting the raw bits by the fractional bits "8"
	return (getRawBits() >> this->_fractionalBits);
}

float Fixed::toFloat(void) const
{
	// Dividing rawBits return by 1 shifter 8 time = 256
	return ((float)getRawBits() / (1 << this->_fractionalBits));
}