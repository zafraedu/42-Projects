#include "./inc/Base.hpp"
#include "./inc/Class_A.hpp"
#include "./inc/Class_B.hpp"
#include "./inc/Class_C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

// class Unknown : public Base {

// };

int main()
{
	Base *obj = generate();

	identify(obj);
	identify(*obj);

	// Unknown u;
	// 	identify(&u);
	// 	identify(u);

	delete obj;

	return 0;
}

Base *generate(void)
{
	std::srand(time(NULL));
	int i = std::rand() % 3;

	switch (i)
	{
	case 0:
		std::cout << "ClassA created" << std::endl;
		return new ClassA;
	case 1:
		std::cout << "ClassB created" << std::endl;
		return new ClassB;
	case 2:
		std::cout << "ClassC created" << std::endl;
		return new ClassC;
	default:
		std::cout << "Error: No class created" << std::endl;
		return NULL;
	}
}

/*
		Usamos un dynamic_cast para determinar el tipo de objeto en tiempo de ejecuccion, ya que
		intentará convertir un puntero a la clase padre en un puntero a la clase derivada. Si la
		conversion es existosa, entonces sabes que el objeto es de la clase derivada; si falla,
		devuelve un nullptr.
*/

void identify(Base *p)
{
	if (p == dynamic_cast<ClassA *>(p))
		std::cout << "Class has been identified as ClassA" << std::endl;
	else if (p == dynamic_cast<ClassB *>(p))
		std::cout << "Class has been identified as ClassB" << std::endl;
	else if (p == dynamic_cast<ClassC *>(p))
		std::cout << "Class has been identified as ClassC" << std::endl;
	else
		std::cout << "Unknown class" << std::endl;
}

void identify(Base &p)
{
	try
	{
		ClassA &a = dynamic_cast<ClassA &>(p);
		(void)a;
		std::cout << "Class has been identified as ClassA" << std::endl;
	}
	catch (const std::exception &e)
	{
		try
		{
			ClassB &b = dynamic_cast<ClassB &>(p);
			(void)b;
			std::cout << "Class has been identified as ClassB" << std::endl;
		}
		catch (const std::exception &e)
		{
			try
			{
				ClassC &c = dynamic_cast<ClassC &>(p);
				(void)c;
				std::cout << "Class has been identified as ClassC" << std::endl;
			}
			catch (const std::exception &e)
			{
				std::cerr << "Unknown class" << std::endl;
				return;
			}
		}
	}
}
