#include <unistd.h>

void rev_print(char *str)
{
	int i;
	for (i = 0; str[i]; i++);
	while (i--)
		write(1, &str[i], 1);
}

int main(int ac, char **av){
	if (ac == 2)
		rev_print(av[1]);
	write(1, "\n", 1);
	return 0;
}

// NORME FORM
/*int	main(int argc, char *argv[])
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		while (i--)
			write(1, &argv[1][i], 1);
	}
	write(1, "\n", 1);
	return (0);
}*/
