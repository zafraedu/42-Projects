#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

#define HIGHEST_GRADE 1
#define LOWEST_GRADE 150

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
	Bureaucrat();

public:
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &cpy);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &obj);

	std::string getName() const;
	int getGrade() const;

	void incrementGrade();
	void decrementGrade();

	void signForm(Form &form);

	/* ---------------- Exception Classes ---------------- */
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw() { return "Grade too high"; }
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw() { return "Grade too low"; }
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif
