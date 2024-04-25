#include <iostream>
#include <cstdlib>
#include "ScalarConverter.hpp"

using std::cerr;

int	main(int argc, char **argv)
{
    if (argc != 2 || !argv[1][0])
    {
        cerr << "Usage: ./convert <literal>" << "\n";
        return EXIT_FAILURE;
    }
    ScalarConverter::convert(argv[1]);
    return EXIT_SUCCESS;
}
