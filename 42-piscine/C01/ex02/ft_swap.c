void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>

int	main(void){
	int a = 2;
	int b = 3;
	ft_swap(&a, &b);
	printf("%d\n%d\n",a,b);
}
*/
