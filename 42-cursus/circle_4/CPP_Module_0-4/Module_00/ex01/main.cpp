#include "./include/PhoneBook.hpp"

int main(int argc, char **argv)
{
	if (argc > 1 && argv)
		return 1;

	PhoneBook book;
	std::string input = "";

	book.welcome();
	while (input.compare("EXIT"))
	{
		std::cin.clear();
		std::cout << "> ";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			book.add();
		else if (!input.compare("SEARCH"))
			book.search();
	}

	return 0;
}
