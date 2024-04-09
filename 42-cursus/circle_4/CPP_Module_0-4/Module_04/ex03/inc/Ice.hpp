#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &cpy);
	virtual ~Ice();

	Ice &operator=(const Ice &obj);

	virtual Ice *clone() const;
	virtual void use(ICharacter &target);
};

#endif
