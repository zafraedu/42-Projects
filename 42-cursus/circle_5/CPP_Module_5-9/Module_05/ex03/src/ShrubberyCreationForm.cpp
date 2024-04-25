#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _target(src._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{
	(void)obj;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (this->getSigned() == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
	{
		throw AForm::GradeTooLowException();
	}

	std::ofstream file((this->getName() + "_shrubbery").c_str());
	file << "                      ___" << std::endl;
	file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
	file << "             ,-'          __,,-- \\" << std::endl;
	file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
	file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
	file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
	file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
	file << "     (     ,-'                  `." << std::endl;
	file << "      `._,'     _   _             ;" << std::endl;
	file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
	file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
	file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
	file << "                \"Hb HH dF" << std::endl;
	file << "                 \"HbHHdF" << std::endl;
	file << "                  |HHHF" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  dHHHb" << std::endl;
	file << "                .dFd|bHb.               o" << std::endl;
	file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
	file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
	file << "##########################################" << std::endl;
	file.close();
}
