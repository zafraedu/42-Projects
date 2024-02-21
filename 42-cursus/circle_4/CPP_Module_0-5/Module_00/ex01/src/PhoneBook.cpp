#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::welcome(void) const
{
	std::cout << "            ╔═════════════╗   " << std::endl;
	std::cout << "╔═══════════╣    Usage    ╠══════════╗" << std::endl;
	std::cout << "║           ╚═════════════╝          ║" << std::endl;
	std::cout << "║  ADD    - To add a contact.        ║" << std::endl;
	std::cout << "║  SEARCH - To search for a contact. ║" << std::endl;
	std::cout << "║  EXIT   - to quite the PhoneBook.  ║" << std::endl;
	std::cout << "╚════════════════════════════════════╝" << std::endl;
	std::cout << std::endl;
}

void PhoneBook::add(void)
{
	static int i;
	if (i < 8)
		this->_currSize = (i) + 1;
	else
		this->_currSize = 8;
	this->_contacts[i % 8].init(i % 8);
	i++;
}

int PhoneBook::_readInput() const
{
	bool valid = false;
	int index = -1;
	do
	{
		std::cout << "index> " << std::flush;
		std::cin >> index;
		if (std::cin.good() && (index < this->_currSize && index >= 0))
			valid = true;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid index; please re-enter." << std::endl;
		}
	} while (!valid);
	return index;
}

void PhoneBook::search(void)
{
	if (this->_currSize == 0)
	{
		std::cout << "PhoneBook is Empty :(" << std::endl;
		return;
	}

	for (int i = 0; i < this->_currSize; i++)
		this->_contacts[i].show(i);

	int index = this->_readInput();
	this->_contacts[index].display();
}
