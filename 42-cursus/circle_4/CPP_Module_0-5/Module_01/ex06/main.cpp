#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cerr << "Usage: ./harlFilter \"level\"\n", 1);

	Harl harl;
	harl.complain(av[1]);

	return 0;
}
