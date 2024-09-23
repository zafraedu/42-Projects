#include "Span.hpp"

int main()
{
	{
		Span a = Span(5);
		for (size_t i = 0; i < 6; i++)
		{
			try
			{
				a.addNumber(i);
			}
			catch (std::exception &e)
			{
				std::cerr << std::endl << e.what() << std::endl;
			}
		}
		std::cout << "shortest span is " << a.shortestSpan() << std::endl;
		std::cout << "longest span is " << a.longestSpan() << std::endl;
	}
	std::cout << std::endl << "---------------------------------------------------------------" << std::endl << std::endl;
	{
		Span a = Span(10000);
		a.addNumber(10000, time(NULL));
		std::cout << "shortest span is " << a.shortestSpan() << std::endl;
		std::cout << "longest span is " << a.longestSpan() << std::endl << std::endl;
	}
	return (0);
}
