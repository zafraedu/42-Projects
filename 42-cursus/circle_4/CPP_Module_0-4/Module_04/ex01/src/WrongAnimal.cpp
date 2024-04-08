#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &to_copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = to_copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &original)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	if (this != &original)
		this->_type = original._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}
