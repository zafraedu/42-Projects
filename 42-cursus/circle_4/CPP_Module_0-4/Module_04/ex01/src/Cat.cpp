#include "../inc/Cat.hpp"

#define LILAC	"\e[0;38;5;13m"
#define RESET	"\e[0m"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << LILAC << this->_type << " constructor called" << RESET << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &to_copy) : Animal(to_copy)
{
	std::cout << LILAC << this->_type << " copy constructor called" << RESET << std::endl;
	*this = to_copy;
}

Cat &Cat::operator=(const Cat &original)
{
	std::cout << LILAC << this->_type << " assignment operator called" << RESET << std::endl;
	if (this != &original)
	{
		this->_type = original._type;
		this->_brain = new Brain(*original._brain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << LILAC << this->_type << " destructor called" << RESET << std::endl;
	delete this->_brain;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow!🐱" << std::endl;
}
