#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = cpy._materia[i];
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_materia[i])
			delete this->_materia[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
			this->_materia[i] = obj._materia[i];
	}
	return *this;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (_materia[i] && _materia[i]->getType() == type)
			return _materia[i]->clone();
	return NULL;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			_materia[i] = m;
			return;
		}
	}
}
