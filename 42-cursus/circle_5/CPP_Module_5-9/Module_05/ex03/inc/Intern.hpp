#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "AForm.hpp"

class Intern
{
public:
	Intern(void);
	Intern(const Intern &to_copy);
	virtual ~Intern(void);

	Intern &operator=(const Intern &obj);

	AForm *makeForm(std::string name, std::string target);
};

#endif
