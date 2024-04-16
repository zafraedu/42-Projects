#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "GENERAL" << std::endl;
	{
		// Constructor
		Bureaucrat a("Pepe", 87);
		// Copy Constructor
		Bureaucrat b(a);
		// Copy assignment
		Bureaucrat c = b;

		// ostream overload
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "TEST 1" << std::endl;
		try
		{
			// grade too low
			Bureaucrat a("A", LOWEST_GRADE + 1);
			std::cout << a << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "TEST 2" << std::endl;
		try
		{
			// grade too high
			Bureaucrat b("B", HIGHEST_GRADE - 1);
			std::cout << b << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "TEST 3" << std::endl;
		try
		{
			// Increment to a grade higher than HIGHEST_GRADE
			Bureaucrat c("C", HIGHEST_GRADE);

			c.incrementGrade();
			std::cout << c << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "TEST 4" << std::endl;
		try
		{
			// Decrement to a grade lower than LOWEST_GRADE
			Bureaucrat d("D", LOWEST_GRADE);

			d.decrementGrade();
			std::cout << d << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "TEST 5" << std::endl;
		try
		{
			// Acceptable grade changes
			Bureaucrat paco("Paco", 10);

			paco.decrementGrade();
			std::cout << paco << std::endl;
			paco.incrementGrade();
			std::cout << paco << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
