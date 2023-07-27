#include <unistd.h>

void first_word(char *str)
{
	while (*str == ' ' || *str == '\t')
		str++;
	while (*str && *str != '\t' && *str != ' ')
	{
		write(1, str, 1);
		str++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	write(1, "\n", 1);
	return 0;
}
