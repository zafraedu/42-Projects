#include <string.h>

char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return 0;
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		i++;
	}
	return i;
}

//OTHER FORM
/*size_t	ft_strspn(const char *s, const char *accept)
{
	int found;
	size_t i = 0;

	while (*s)
	{
		found = 0;
		const char *tmp = accept;
		while (*tmp)
		{
			if (*s == *tmp)
			{
				found = 1;
				break;
			}
			tmp++;
		}
		if (!found)
			break;
		s++;
		i++;
	}
	return i;
}*/


//MAIN
/*#include <stdio.h>
int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%li\n", strspn(av[1], av[2]));
		printf("%li\n", ft_strspn(av[1], av[2]));
	}
	return 0;
}*/
