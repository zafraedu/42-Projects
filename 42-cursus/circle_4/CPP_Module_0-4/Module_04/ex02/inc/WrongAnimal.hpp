#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &to_copy);
	WrongAnimal &operator=(const WrongAnimal &original);
	virtual ~WrongAnimal();

	std::string getType() const;
	virtual void makeSound() const;
};

#endif
