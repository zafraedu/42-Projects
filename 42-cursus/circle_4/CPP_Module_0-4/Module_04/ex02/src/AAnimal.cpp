#include "AAnimal.hpp"

#define GREEN "\e[0;32m"
#define RESET "\e[0m"

AAnimal::AAnimal(void) : _type("AAnimal")
{
	std::cout << GREEN << "AAnimal default constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << GREEN << "AAnimal default constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &to_copy)
{
	std::cout << GREEN << "AAnimal copy constructor called" << RESET << std::endl;
	*this = to_copy;
	return;
}

AAnimal &AAnimal::operator=(const AAnimal &original)
{
	std::cout << GREEN << "AAnimal assignment operator called" << RESET << std::endl;
	if (this != &original)
		this->_type = original._type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << GREEN << "AAnimal destructor called" << RESET << std::endl;
}

std::string AAnimal::getType(void) const
{
	return this->_type;
}

void AAnimal::makeSound(void) const
{
	std::cout << GREEN << "AAnimal makeSound called" << RESET << std::endl;
}
