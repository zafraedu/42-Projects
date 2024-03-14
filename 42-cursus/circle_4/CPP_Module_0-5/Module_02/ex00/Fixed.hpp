#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;

public:
	Fixed();
	Fixed(const Fixed &to_copy);
	Fixed &operator=(const Fixed &to_copy);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
