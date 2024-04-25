#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <fstream>
#include <limits>

enum e_type
{
	NONE,
	INT,
	FLOAT,
	CHAR,
	DOUBLE,
	LITERALS
};

class ScalarConverter
{
private:
	char _c;
	int _n;
	float _f;
	double _d;

	bool _impossible;

	std::string _str;
	e_type _type;

public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &cpy);
	virtual ~ScalarConverter();

	ScalarConverter &operator=(const ScalarConverter &obj);

	char getC(void) const;
	void setC(char c);

	int getI(void) const;
	void setI(int n);

	float getF(void) const;
	void setF(float f);

	double getD(void) const;
	void setD(double d);

	void convert(void);

	void setStr(std::string str);
	std::string getStr(void) const;

	e_type getType(void) const;
	void setType(void);

	bool isChar(void) const;
	bool isInt(void) const;
	bool isFloat(void) const;
	bool isDouble(void) const;

	bool isImpossible(void);

	void printChar(void) const;
	void printInt(void) const;
	void printFloat(void) const;
	void printDouble(void) const;

	bool isLiterals(void) const;

	class ConverterException : public std::exception
	{
		virtual const char *what() const throw() { return "Unknown type"; }
	};
};

std::ostream &operator<<(std::ostream &os, const ScalarConverter &obj);

#endif
