char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
	char dest[11] = "Hola ";
	char src[] = "mundo";
	//printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest, src));
}
*/
