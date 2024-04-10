#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_materia[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &cpy);
	virtual ~MateriaSource();

	MateriaSource &operator=(const MateriaSource &obj);

	AMateria *createMateria(std::string const &type);
	void learnMateria(AMateria *);
};

#endif
