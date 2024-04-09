#include "../inc/Dog.hpp"

#define V_CYAN	"\e[0;38;5;44m"
#define RESET	"\e[0m"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << V_CYAN << this->_type << " constructor called" << RESET << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &to_copy) : Animal(to_copy)
{
	std::cout << V_CYAN << this->_type << " copy constructor called" << RESET << std::endl;
	*this = to_copy;
}

Dog &Dog::operator=(const Dog &original)
{
	std::cout << V_CYAN << this->_type << " assignment operator called" << RESET << std::endl;
	if (this != &original)
	{
		this->_type = original._type;
		this->_brain = new Brain(*original._brain);
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << V_CYAN << this->_type << " destructor called" << RESET << std::endl;
	delete this->_brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof!🐶" << std::endl;
}
