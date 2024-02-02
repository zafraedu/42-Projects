#include <unistd.h> //write
#include <stdlib.h> //malloc, realloc

void camel_to_snake(char *s)
{
// no tener en cuenta los espacios del principio
	while (*s == ' ' || *s == '\t')
		s++;
// cuando encuentre una upper imprima '_' y la cambia a lower
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
		{
			*s += 32;
			write(1, "_", 1);
		}
		write(1, s, 1);
		s++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		camel_to_snake(av[1]);
	write(1, "\n", 1);
	return 0;
}
