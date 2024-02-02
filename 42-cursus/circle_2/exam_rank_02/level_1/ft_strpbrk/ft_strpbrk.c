#include <stddef.h> //NULL

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;

	if (!s1 || !s2)
		return NULL;
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return (char *) s1;
			i++;
		}
	s1++;
	}
	return NULL;
}

//MAIN
/*#include <stdio.h>
#include <string.h>
int main (int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s\n", ft_strpbrk(av[1], av[2]));
		printf("%s\n", strpbrk(av[1], av[2]));
	}
	return 0;
}*/
