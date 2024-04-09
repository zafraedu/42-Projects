#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
#include <string>

class AAnimal
{
protected:
	std::string _type;

public:
	AAnimal(void);
	AAnimal(std::string type);
	AAnimal(const AAnimal &to_copy);
	AAnimal &operator=(const AAnimal &original);
	virtual ~AAnimal(void);

	std::string getType(void) const;
	virtual void makeSound(void) const = 0;
};

#endif
