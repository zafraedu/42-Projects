#include "iter.hpp"

void ft_tolower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void ft_toupper(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
}

int main()
{
	char a[] = {'A', 'B', 'C'};

	std::cout << "Original:" << "\n\ta[0]: " << a[0] << "\n\ta[1]: " << a[1] << "\n\ta[2]: " << a[2] << std::endl
						<< std::endl;

	::iter(a, sizeof(a) / sizeof(char), ft_tolower);

	std::cout << "Changed:" << "\n\ta[0]: " << a[0] << "\n\ta[1]: " << a[1] << "\n\ta[2]: " << a[2] << std::endl
						<< std::endl;

	::iter(a, 2, ft_toupper);

	std::cout << "Changed:" << "\n\ta[0]: " << a[0] << "\n\ta[1]: " << a[1] << "\n\ta[2]: " << a[2] << std::endl
						<< std::endl;
}
