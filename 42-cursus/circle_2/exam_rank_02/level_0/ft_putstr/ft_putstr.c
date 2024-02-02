#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

//MAIN
/*int main(int ac, char **av){
	if (ac == 2)
 		ft_putstr(av[1]);
 	write(1, "\n", 1);
 	return 0;
}*/
