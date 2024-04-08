#include "../inc/Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << this->_type << " constructor called" << std::endl;
}

Dog::Dog(const Dog &to_copy) : Animal(to_copy)
{
	std::cout << this->_type << " copy constructor called" << std::endl;
	*this = to_copy;
}

Dog &Dog::operator=(const Dog &original)
{
	std::cout << this->_type << " assignment operator called" << std::endl;
	if (this != &original)
		this->_type = original._type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << this->_type << " destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof!🐶" << std::endl;
}
