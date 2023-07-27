#include <unistd.h>

void print_repeat_char(char c)
{
	int cantidad;

	if (c >= 'a' && c <= 'z')
		cantidad = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		cantidad = c - 'A' + 1;
	while (cantidad--)
		write(1, &c, 1);
}

void repeat_alpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			print_repeat_char(*str);
		else
			write(1, str, 1);
		str++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
	return 0;
}
