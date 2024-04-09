#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::cout << "---------------------HEAP---------------------" << std::endl;

	const AAnimal*	cat = new Cat();
	const AAnimal*	dog = new Dog();
	//const AAnimal*	animal = new AAnimal();

	delete	cat;
	delete	dog;

	std::cout << "--------------------STACK---------------------" << std::endl;

	Cat	stack_cat;
	Cat	operator_cat = stack_cat;
	Cat	copy_cat(stack_cat);

	Dog	stack_dog;
	Dog	oeprator_dog = stack_dog;
	Dog	copy_dog(stack_dog);

	std::cout << "---------------------ARRAY--------------------" << std::endl;

	int		len = 10;
	int		k = 0;
	AAnimal	*tab[len];

	while (k < (len / 2))
	{
		tab[k] = new Dog();
		k++;
	}
	while (k < len)
	{
		tab[k] = new Cat();
		k++;
	}
	while (--k >= 0)
		delete tab[k];
	return (0);
}
