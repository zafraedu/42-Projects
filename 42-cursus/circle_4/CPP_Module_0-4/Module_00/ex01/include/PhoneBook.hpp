#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "../include/Contact.hpp"
#include <limits>

class PhoneBook
{
private:
	Contact _contacts[2];
	int _currSize;

	int _readInput() const;

public:
	PhoneBook();
	~PhoneBook();
	void welcome(void) const;
	void add(void);
	void search(void);
};

#endif
