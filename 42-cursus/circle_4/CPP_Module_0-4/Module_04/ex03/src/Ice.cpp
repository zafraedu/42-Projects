#include "../inc/Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice &cpy) : AMateria("ice")
{
	*this = cpy;
}

Ice::~Ice(void){};

Ice &Ice::operator=(const Ice &obj)
{
	(void)obj;
	return (*this);
}

Ice *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
