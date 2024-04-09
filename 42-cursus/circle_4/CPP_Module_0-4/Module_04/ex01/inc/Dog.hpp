#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;

public:
	Dog(void);
	Dog(const Dog &to_copy);
	Dog &operator=(const Dog &original);
	virtual ~Dog();

	void makeSound(void) const;
};

#endif
