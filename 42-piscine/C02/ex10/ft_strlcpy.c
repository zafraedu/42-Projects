unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
	char dest[5];
	char src[] = "Hola que tal";
	printf("%d %s\n", strlcpy(dest, src, sizeof(dest)), dest);
	printf("%d %s\n", ft_strlcpy(dest, src, sizeof(dest)), dest);
	return (0);
}
*/
