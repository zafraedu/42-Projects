#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serialization
{
private:
	Serialization();
	Serialization(const Serialization &rhs);
	~Serialization();

	Serialization &operator=(const Serialization &rhs);

public:
	static uintptr_t serialize(data_t *ptr);
	static data_t *deserialize(uintptr_t raw);
};

#endif
