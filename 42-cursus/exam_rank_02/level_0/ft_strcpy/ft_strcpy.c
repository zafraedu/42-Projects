char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = 0;
	return s1;
}

//MAIN
/*#include <stdio.h>
int main(){
	char s1[] = "";
	char s2[] = "origen en destino";
	printf("%s\n", ft_strcpy(s1, s2));
}*/
