#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fixedPointValue(n << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _fixedPointValue(roundf(n * (1 << _bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &to_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = to_copy;
}

Fixed &Fixed::operator=(const Fixed &to_copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &to_copy)
		this->_fixedPointValue = to_copy.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->getRawBits()) / (1 << _bits);
}

int Fixed::toInt(void) const
{
	return this->_fixedPointValue >> _bits;
}

std::ostream &operator<<(std::ostream &stream, Fixed const &i)
{
	stream << i.toFloat();
	return stream;
}
