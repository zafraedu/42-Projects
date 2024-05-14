#include "ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter()
{
	std::cout << GREEN << "ScalarConvert default constructor called\033[0m" << END << std::endl;
	return;
}

ScalarConverter::ScalarConverter(const ScalarConverter &rhs)
{
	std::cout << GREEN << "ScalarConvert copy constructor called\033[0m" << END << std::endl;
	(void)rhs;
	return;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << RED << "ScalarConvert destructor called\033[0m" << END << std::endl;
	return;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
	std::cout << GREEN << "ScalarConvert copy assigment operator called\033[0m" << END << std::endl;
	(void)rhs;
	return *this;
}

static bool isInt(const std::string &str)
{
	if (!std::isdigit(str[0]) && str[0] != '+' && str[0] != '-')
		return false;
	for (size_t i = 1; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

static bool isFloat(const std::string &str)
{
	int dotCount = 0;
	int fCount = 0;

	if (str[str.length() - 1] != 'f')
		return false;
	if (!std::isdigit(str[0]) && str[0] != '+' && str[0] != '-')
		return false;
	for (size_t i = 1; i < str.length(); i++)
	{
		if (str[i] == '.')
			dotCount++;
		if (str[i] == 'f' || str[i] == 'F')
			fCount++;
		if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
			return false;
	}
	if (dotCount != 1 || fCount != 1)
		return false;
	return true;
}

static bool isDouble(const std::string &str)
{
	int dotCount = 0;

	if (!std::isdigit(str[0]) && str[0] != '+' && str[0] != '-')
		return false;
	for (size_t i = 1; i < str.length(); i++)
	{
		if (str[i] == '.')
			dotCount++;
		if (!std::isdigit(str[i]) && str[i] != '.')
			return false;
	}
	if (dotCount != 1)
		return false;
	return true;
}

static bool intLimits(const std::string &str)
{
	if (atol(str.c_str()) < INT_MIN || atol(str.c_str()) > INT_MAX)
	{
		std::cout << "char: overflow" << std::endl;
		std::cout << "int: overflow" << std::endl;
		std::cout << "float: overflow" << std::endl;
		std::cout << "double: overflow" << std::endl;
		return true;
	}
	return false;
}

e_dataType getIndex(const std::string &str)
{
	if (str == "nanf" || str == "inff" || str == "+inff" || str == "-inff")
		return (PSF);
	if (str == "nan" || str == "inf" || str == "+inf" || str == "-inf")
		return (PSD);
	if (str.length() == 1 && ((str[0] >= 32 && str[0] < 48) || (str[0] > 57 && str[0] < 126)))
		return (CHAR);
	else if (isInt(str))
		return (INT);
	else if (isFloat(str))
		return (FLOAT);
	else if (isDouble(str))
		return (DOUBLE);
	return INVALID;
}

void ScalarConverter::convert(const std::string str)
{
	switch (getIndex(str))
	{
	case CHAR:
	{
		char c = str[0];
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
		break;
	}
	case INT:
	{
		if (!intLimits(str))
		{
			int i = atol(str.c_str());
			if (std::isprint(static_cast<char>(i)) != 0)
				std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
			else
				std::cout << std::fixed;
			std::cout << std::setprecision(1);
			std::cout << "char: non displayable" << std::endl;
			std::cout << "int: " << i << std::endl;
			std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;	// Explicit demotion
			std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl; // Explicit demotion
		}
		break;
	}
	case FLOAT:
	{
		if (!intLimits(str))
		{
			float f = atof(str.c_str());
			if (std::isprint(static_cast<char>(f)) != 0)
				std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
			else
				std::cout << "char: non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(f) << std::endl; // Explicit promotion
			if (f == static_cast<int>(f))
			{
				std::cout << "float: " << f << ".0f" << std::endl;
				std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
			}
			else
			{
				std::cout << std::fixed;
				std::cout << std::setprecision(6);
				std::cout << "float: " << f << "f" << std::endl;
				std::cout << "double: " << static_cast<double>(f) << std::endl;
			}
		}
		break;
	}
	case DOUBLE:
	{
		if (!intLimits(str))
		{
			double d = atof(str.c_str());
			if (std::isprint(static_cast<char>(d)) != 0)
				std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
			else
				std::cout << "char: non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(d) << std::endl; // Explicit promotion
			if (d == static_cast<int>(d))
			{
				std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
				std::cout << "double: " << d << ".0" << std::endl;
			}
			else
			{
				std::cout << std::fixed;
				std::cout << std::setprecision(6);
				std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
				std::cout << "double: " << d << std::endl;
			}
		}
		break;
	}
	case PSF:
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
		break;
	}
	case PSD:
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
		break;
	}
	default:
	{
		std::cout << "Error, invalid conversion" << std::endl;
		break;
	}
	}
}
