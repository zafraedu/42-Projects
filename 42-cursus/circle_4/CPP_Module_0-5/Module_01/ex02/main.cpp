#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "Address of str:\t\t" << &str << std::endl;
	std::cout << "Thru pointer value:\t" << strPTR << std::endl;
	std::cout << "Thru reference value:\t" << &strREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of str:\t\t\t" << str << std::endl;
	std::cout << "Thru pointer dereferencing:\t" << *strPTR << std::endl;
	std::cout << "Thru reference:\t\t\t" << strREF << std::endl;

	return 0;
}
