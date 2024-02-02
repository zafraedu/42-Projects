char	*ft_strrev(char *str)
{
	int i = 0, length = 0;
	char tmp;

	for (length = 0; str[length]; length++);
	for (i = 0; i < length / 2; i++)
	{
		tmp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = tmp;
	}
	return str;
}

//NORM FORM
/*char	*ft_strrev(char *str)
{
	int i = 0, length = 0;
	char tmp;

	while (str[length])
		length++;
	while (i < length / 2)
	{
		tmp =  str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = tmp;
		i++;
	}
	return str;
}*/

//MAIN
/*#include <stdio.h>
int main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", ft_strrev(av[1]));
	return 0;
}*/
