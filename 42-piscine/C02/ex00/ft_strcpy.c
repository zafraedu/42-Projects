char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
	char dest[7] = "abcdef";
	char src[7] = "Origen";
	printf("%s\n", ft_strcpy(dest, src));
	strcpy(dest, src);
}
*/
