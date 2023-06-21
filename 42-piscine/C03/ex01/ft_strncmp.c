int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
	printf("%d\n", ft_strncmp("hola que tal", "hola mundo", 4));
	printf("%d\n", strncmp("hola que tal", "hola mundo", 4));
}
*/
