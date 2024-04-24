#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat bureaucrat("ash", 11);
        Form form("formName", 10);

        bureaucrat.signForm(form);

        std::cout << form << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
