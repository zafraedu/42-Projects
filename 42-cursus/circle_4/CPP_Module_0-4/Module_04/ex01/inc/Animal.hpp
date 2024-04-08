#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string _type;

public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal &to_copy);
	Animal &operator=(const Animal &original);
	virtual ~Animal(void);

	std::string getType(void) const;
	virtual void makeSound(void) const;
};

#endif
