#include "../inc/Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure &cpy)
{
	*this = cpy;
}

Cure::~Cure(void) {}

Cure &Cure::operator=(const Cure &obj)
{
	(void)obj;
	return (*this);
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
