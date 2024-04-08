#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(const Dog &to_copy);
	Dog &operator=(const Dog &original);
	virtual ~Dog();

	void makeSound(void) const;
};

#endif
