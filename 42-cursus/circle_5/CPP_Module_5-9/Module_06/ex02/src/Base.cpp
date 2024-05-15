#include "../inc/Base.hpp"
#include <iostream>

Base::~Base()
{
	std::cout << RED << "Base destructor called" << END << std::endl;
	return;
}
