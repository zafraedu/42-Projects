#include <iostream>
#include "./Serialization.hpp"

int main(int argc, char **argv)
{
	if (argc > 1 && argv)
	{
		std::cerr << "serializer: error: command-line arguments aren't supported" << '\n';
		return 1;
	}

	data_t foo;
	uintptr_t reinterpreted;

	foo.dummy_str = std::string("test");
	reinterpreted = Serialization::serialize(&foo);

	std::cout << "OG foo (Data) Address = " << &foo << std::endl
			  << "dummy_str value = " << foo.dummy_str << std::endl;

	std::cout << std::endl;

	std::cout << "Reinterpreted foo value = " << reinterpreted << std::endl;

	std::cout << std::endl;

	data_t *deserialized;

	deserialized = Serialization::deserialize(reinterpreted);

	std::cout << "Deserialized Address = " << deserialized << std::endl
			  << "dummy_str value = " << deserialized->dummy_str << std::endl;

	return 0;
}
