#include "AForm.hpp"

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
        throw AForm::GradeTooHighException();
    if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &src) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()) {}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &obj)
{
    if (this != &obj)
        _signed = obj.getSigned();
    return *this;
}

std::string AForm::getName() const
{
    return _name;
}

bool AForm::getSigned() const
{
    return _signed;
}

int AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw AForm::GradeTooLowException();
    _signed = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
    this->execute(executor);
}

std::ostream &operator<<(std::ostream &os, const AForm &obj)
{
    os << "------------- AForm Info -------------" << std::endl;
    os << "AForm name: " << obj.getName() << std::endl
       << "Grade to sign: " << obj.getGradeToSign() << std::endl
       << "Grade to execute: " << obj.getGradeToExecute();
    return os;
}
