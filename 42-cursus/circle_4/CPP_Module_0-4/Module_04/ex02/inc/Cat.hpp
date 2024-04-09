#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain *_brain;
public:
	Cat(void);
	Cat(const Cat &to_copy);
	Cat &operator=(const Cat &original);
	virtual ~Cat();

	void makeSound(void) const;
};

#endif
