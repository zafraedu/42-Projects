int	max(int* tab, unsigned int len)
{
	unsigned int i = 0, result = tab[i];

	if (len == 0)
		return 0;
	for (; i < len; i++) {
		if (result < tab[i])
			result = tab[i];
	}
	return result;
}

//NORM FORM
/*int	max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	unsigned int result = tab[i];

	if (len == 0)
		return 0;
	while (i < len)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return result;
}*/

//MAIN
/*#include <stdio.h>
int	main(){
	unsigned int len = 5;
	int tab[5] = {3, 2, 8, 4, 0};
	printf("%i\n", max(tab, len));
}*/
