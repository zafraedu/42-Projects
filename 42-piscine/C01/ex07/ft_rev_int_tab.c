void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void){
	int tab[6] = {0,1,2,3,4,5};
	int size = 6;
	ft_rev_int_tab(tab, size);

	int i = 0;
	while(i <= (size - 1)){
		printf("%d", tab[i]);
		if(i < size - 1)
			printf(", ");
		i++;
	}
}
*/
