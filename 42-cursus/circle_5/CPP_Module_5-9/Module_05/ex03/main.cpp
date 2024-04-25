#include <iostream>

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "./inc/Intern.hpp"

int main(void)
{
    AForm *a;
    AForm *b;
    AForm *c;

    std::cout << std::endl;

    Intern Arnaldo;

    a = Arnaldo.makeForm("robotomy request", "Ebil");
    std::cout << std::endl;
    b = Arnaldo.makeForm("presidential pardon", "Ebil");
    std::cout << std::endl;
    c = Arnaldo.makeForm("shrubbery creation", "Ebil");
    std::cout << std::endl;

    Arnaldo.makeForm("foo", "Ebil");
    std::cout << std::endl;

    delete a;
    delete b;
    delete c;
    return 0;
}
