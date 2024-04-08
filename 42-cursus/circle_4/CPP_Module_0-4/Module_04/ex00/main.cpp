#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
// the pointer itself is const not the object it points to
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();


std::cout << "-------------------" << std::endl;
 WrongAnimal* wrong = new WrongAnimal();
    wrong->makeSound();
    wrong->getType();
    delete wrong;
    wrong = new WrongCat();
    wrong->makeSound();
    wrong->getType();
    delete wrong;
    std::cout << "-------------------" << std::endl;

delete meta;
delete i;
delete j;
//
return 0;
}
