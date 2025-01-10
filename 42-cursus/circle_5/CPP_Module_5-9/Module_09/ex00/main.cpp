#include "./BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	try
	{
		if (argc > 2)
			throw static_cast<std::string>("too many args");
		BitcoinExchange bitcoin;
		bitcoin.handleInputFile(argv[1]);
		// bitcoin.printMap();
	}
	catch (std::string error)
	{
		std::cout << "Error : " << error << std::endl;
	}
}
