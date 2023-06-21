void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
/*
#include <stdio.h>

int	main(void){
	int tab[6] = {4, 2, 7, 5, 3, 6};
	int	size = 6;
	ft_sort_int_tab(tab, size);

	int i = 0;
	while(i < size){
		printf("%d", tab[i]);
		if(i < size -1)
			printf(", ");
		i++;
	}
}
*/
