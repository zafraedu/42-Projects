#include "../inc/Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << this->_type << " constructor called" << std::endl;
}

Cat::Cat(const Cat &to_copy) : Animal(to_copy)
{
	std::cout << this->_type << " copy constructor called" << std::endl;
	*this = to_copy;
}

Cat &Cat::operator=(const Cat &original)
{
	std::cout << this->_type << " assignment operator called" << std::endl;
	if (this != &original)
		this->_type = original._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << this->_type << " destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow!🐱" << std::endl;
}
