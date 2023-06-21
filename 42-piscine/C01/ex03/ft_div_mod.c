void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void){
	int div;
	int mod;
	ft_div_mod(15, 3, &div, &mod);
	printf("%d | %d", div, mod);
}
*/
