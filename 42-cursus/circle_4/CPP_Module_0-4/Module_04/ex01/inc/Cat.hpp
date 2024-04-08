#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(const Cat &to_copy);
	Cat &operator=(const Cat &original);
	virtual ~Cat();

	void makeSound(void) const;
};

#endif
