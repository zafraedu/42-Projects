#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &to_copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = to_copy;
	return;
}

Animal &Animal::operator=(const Animal &original)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &original)
		this->_type = original._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->_type;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal makeSound called" << std::endl;
}
