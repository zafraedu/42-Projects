#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
