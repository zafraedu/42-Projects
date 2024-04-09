#include "Animal.hpp"

#define GREEN "\e[0;32m"
#define RESET "\e[0m"

Animal::Animal(void) : _type("Animal")
{
	std::cout << GREEN << "Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << GREEN << "Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &to_copy)
{
	std::cout << GREEN << "Animal copy constructor called" << RESET << std::endl;
	*this = to_copy;
	return;
}

Animal &Animal::operator=(const Animal &original)
{
	std::cout << GREEN << "Animal assignment operator called" << RESET << std::endl;
	if (this != &original)
		this->_type = original._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << GREEN << "Animal destructor called" << RESET << std::endl;
}

std::string Animal::getType(void) const
{
	return this->_type;
}

void Animal::makeSound(void) const
{
	std::cout << GREEN << "Animal makeSound called" << RESET << std::endl;
}
