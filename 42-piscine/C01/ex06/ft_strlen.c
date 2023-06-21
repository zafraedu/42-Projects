int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(void){
	char *c = "Hola";
	printf("%d", ft_strlen(c));
}
*/
