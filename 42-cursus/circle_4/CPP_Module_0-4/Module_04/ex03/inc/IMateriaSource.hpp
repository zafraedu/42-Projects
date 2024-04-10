#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

class IMateriaSource
{
public:
	virtual ~IMateriaSource(void) {}

	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria *createMateria(const std::string &type) = 0;
};

#endif
