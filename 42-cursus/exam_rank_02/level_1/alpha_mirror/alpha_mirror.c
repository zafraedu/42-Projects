#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = 90 - argv[1][i] + 65;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = 'z' - argv[1][i] + 'a';
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1,"\n",1);
}

//OTHER FORM
/*void alpha_mirror(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = 'z' - *s + 'a';
		else if (*s >= 'A' && *s <= 'Z')
			*s = 'Z' - *s + 'A';
	write(1, s, 1);
	s++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	write(1, "\n", 1);
	return 0;
}*/
