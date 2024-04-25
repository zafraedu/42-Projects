#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string _target;
	PresidentialPardonForm(void);

public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	virtual ~PresidentialPardonForm(void);

	PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);

	void execute(const Bureaucrat &executor) const;
};

#endif
