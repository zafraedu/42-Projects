#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i = 0;

	while (src[i])
		i++;
	char *str = (char *)malloc(sizeof(*str) * (i + 1));
	if (str == NULL)
		return NULL;
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	src[i] = 0;
	return str;
}

//MAIN
/*#include <stdio.h>
int main(int ac, char **av)
{
	char *str = ft_strdup(av[1]);

	if (ac == 2)
		printf("%s", str);
	printf("\n");
	free(str);
	return 0;
}*/
