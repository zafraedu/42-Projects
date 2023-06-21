int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void){
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("1234"));
	printf("%d\n", ft_str_is_numeric("12a3"));
	printf("%d\n", ft_str_is_numeric("abcd"));
}
*/
