#include "../include/Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::_getInput(std::string data) const
{
	std::string input = "";
	bool valid = false;

	do
	{
		std::cout << data << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Invalid input; please try again." << std::endl;
		}
	} while (!valid);
	return input;
}

std::string Contact::_printLen(std::string str) const
{
	if (str.length() >= 10)
		return str.substr(0, 9) + ".";
	return str;
}

void Contact::init(int i)
{
	this->_index = i;
	this->_firstName = this->_getInput("firstName> ");
	this->_lastName = this->_getInput("lastName> ");
	this->_nickName = this->_getInput("nickName> ");
	this->_phoneNumber = this->_getInput("phoneNumber> ");
	this->_darkestSecret = this->_getInput("darkestSecret> ");
	std::cout << std::endl;
}

void Contact::show(int i)
{
	std::cout << "╔═══╦════════════╦════════════╦════════════╗" << std::endl;
	std::cout << "║ " << i << " " << std::flush;
	std::cout << "║ " << std::setw(10) << _printLen(this->_firstName) << " " << std::flush;
	std::cout << "║ " << std::setw(10) << _printLen(this->_lastName) << " " << std::flush;
	std::cout << "║ " << std::setw(10) << _printLen(this->_nickName) << " ║" << std::endl;
	std::cout << "╚═══╩════════════╩════════════╩════════════╝" << std::endl;
}

void Contact::display()
{
	std::cout << std::endl;
	std::cout << "[ CONTACT " << this->_index << " ]" << std::endl;
	std::cout << "First Name:\t" << this->_firstName << std::endl;
	std::cout << "Last Name:\t" << this->_lastName << std::endl;
	std::cout << "Nickname:\t" << this->_nickName << std::endl;
	std::cout << "Phone number:\t" << this->_nickName << std::endl;
	std::cout << "Darkest secret:\t" << this->_nickName << std::endl;
	std::cout << std::endl;
	std::cin.ignore();
}
