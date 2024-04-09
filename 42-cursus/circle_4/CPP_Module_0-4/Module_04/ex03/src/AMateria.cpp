#include "../inc/AMateria.hpp"

AMateria::AMateria(void) : type("") {}

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::AMateria(const AMateria &cpy)
{
	*this = cpy;
}
AMateria::~AMateria(void) {}

AMateria &AMateria::operator=(const AMateria &obj)
{
	(void)obj;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return this->type;
}

AMateria *AMateria::clone() const
{
	return (AMateria *)this;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}
