int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void){
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("1b*A"));
	printf("%d\n", ft_str_is_printable("caña"));
}
*/
