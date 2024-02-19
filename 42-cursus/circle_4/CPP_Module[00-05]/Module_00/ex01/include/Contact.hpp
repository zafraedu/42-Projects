#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
	int _index;

	std::string _getInput(std::string data) const;
	std::string _printLen(std::string str) const;

public:
	Contact();
	~Contact();
	void init(int i);
	void show(int i);
	void display();
};

#endif
