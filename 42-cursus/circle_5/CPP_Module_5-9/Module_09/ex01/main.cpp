#include "./RPN.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
		{
			throw ": invalid number of argumnts";
		}
		RPN rpn(argv[1]);
	}
	catch (const char *error)
	{
		std::cout << "Error" << error << std::endl;
	}
}
