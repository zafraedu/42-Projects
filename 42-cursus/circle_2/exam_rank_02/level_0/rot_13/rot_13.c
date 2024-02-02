#include <unistd.h>

void rot_13(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = (*str - 'a' + 13) % 26 + 'a';
		else if (*str >= 'A' && *str <= 'Z')
			*str = (*str - 'A' + 13) % 26 + 'A';
	write(1, str, 1);
	str++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	write(1, "\n", 1);
	return 0;
}

//OTHER FORM
/*int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);

}*/
// el modulo de 26 es solo para asegurar que el valor esta en entre 0 y 25
// (que son la cantidad de letras del alfabeto) en este codigo no es necesario
