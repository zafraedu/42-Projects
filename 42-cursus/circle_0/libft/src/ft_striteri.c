/* aplica la funcion f en cada caracter de la cadena "s"                      */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = ft_strlen(s);
	while (i--)
		f(i, &s[i]);
}
