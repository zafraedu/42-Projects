int	ft_strlen(char *str){
	int i;
	for (i = 0; str[i]; i++);
	return i;
}

//NORME FORM
/*int ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}*/

//MAIN
/*#include <stdio.h>
int main(int ac, char **av){
	if (ac == 2)
		printf("%i\n", ft_strlen(av[1]));
	return 0;
}*/
