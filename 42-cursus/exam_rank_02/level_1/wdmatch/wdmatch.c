#include <unistd.h>

void ft_putstr(char *str) {
	for (int i = 0; str[i]; i++)
		write(1, &str[i], 1);
}

int	main(int ac, char **av)
{
	int i = 0, j = 0;

	if (ac == 3)
	{
		while (av[2][j])
			if (av[2][j++] == av[1][i])
				i++;
		if (!av[1][i]) //verifica si ha llegado al final de la cadena
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return 0;
}
