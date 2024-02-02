unsigned char	swap_bits(unsigned char octet) {
	return ((octet >> 4) | (octet << 4));
}

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
		byte_invertido = swap_bits(byte);            	// Llama a la función reverse_bits
		printf("Byte invertido: %u\n", byte_invertido); // Imprime el byte invertido
	}
	return (0);
}*/
