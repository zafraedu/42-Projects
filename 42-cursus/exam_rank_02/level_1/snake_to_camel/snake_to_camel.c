#include <stdlib.h> //malloc, free, realloc
#include <unistd.h> //write

void snake_to_camel(char *str)
{
	int i = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == '_' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[++i] -= 32;
		else if (str[i] == '_')
			i++;
		write(1, &str[i++], 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		snake_to_camel(av[1]);
	write(1, "\n", 1);
	return 0;
}

//OTHER FORM (fallan cosas)
/*#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;

	if (argc ==2 )
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] == '_')
			{
				i++;
				argv[1][i] = argv[1][i]-32;
			}
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}*/
