unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result = 0;
	int				i;

	for (i = 0; i < 8; i++)
	{
		result = (result << 1) | (octet & 1);
		octet >>= 1;
	}
	return result;
}

//OTHER FORM
/*unsigned char   reverse_bits(unsigned char octet)
{
	return  (((octet >> 0) & 1) << 7) | \
			(((octet >> 1) & 1) << 6) | \
			(((octet >> 2) & 1) << 5) | \
			(((octet >> 3) & 1) << 4) | \
			(((octet >> 4) & 1) << 3) | \
			(((octet >> 5) & 1) << 2) | \
			(((octet >> 6) & 1) << 1) | \
			(((octet >> 7) & 1) << 0);
}*/

//MAIN
/*#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		unsigned char	byte_invertido;
		unsigned char byte = atoi(av[1]);

		printf("Byte original: %u\n", byte);            // Imprime el byte original
		byte_invertido = reverse_bits(byte);            // Llama a la función reverse_bits
		printf("Byte invertido: %u\n", byte_invertido); // Imprime el byte invertido
	}
	return (0);
}*/
