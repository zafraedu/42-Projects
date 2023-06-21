char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
	char src[8] = "Eduardo";
	char dest[8];

	printf("%s\n", ft_strncpy(dest, src, 3));
	printf("%s\n", strncpy(dest, src, 3));
}
*/
