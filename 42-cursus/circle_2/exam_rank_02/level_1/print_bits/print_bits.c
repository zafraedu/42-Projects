#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

//MAIN
/*#include <stdlib.h>
int main(int ac, char **av)
{
	unsigned char octet = atoi(av[1]);

	if (ac == 2)
		print_bits(octet);
	write(1, "\n", 1);
	return 0;
}*/
