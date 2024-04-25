#include <iostream>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    Bureaucrat hermano("Hermano", LOWEST_GRADE);
    Bureaucrat ebil("Ebil", HIGHEST_GRADE);

    ShrubberyCreationForm scf("Ebil");
    PresidentialPardonForm ppf("Ebil");
    RobotomyRequestForm rrf("Ebil");
    std::cout << std::endl;

    ebil.executeForm(scf);
    scf.beSigned(ebil);
    ebil.executeForm(scf);

    std::cout << std::endl;

    ebil.executeForm(ppf);
    ppf.beSigned(ebil);
    ebil.executeForm(ppf);

    std::cout << std::endl;

    ebil.executeForm(rrf);
    rrf.beSigned(ebil);
    ebil.executeForm(rrf);

    std::cout << std::endl;

    try
    {
        hermano.executeForm(scf);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
