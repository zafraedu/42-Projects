/* cambia el valor de los primeros "size" del string "str" por el caracter "c"*/
#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	size_t	i;
	char	*pstr;

	i = 0;
	pstr = (char *)str;
	while (i < size)
		pstr[i++] = c;
	return (str);
}
