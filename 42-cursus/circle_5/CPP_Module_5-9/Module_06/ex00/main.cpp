#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ScalarConverter::convert(argv[1]);
        return 0;
    }
    std::cout << "Error: usage: ./ScalarConverter <arg>" << std::endl;
    return 1;
}
