/* concatena la cadena "src" en la cadena "dest" hasta que ESTE llegue
a su	maximo(size) terminando en nulo */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (len_d >= size)
		return (len_s + size);
	else if (len_d + 1 < size)
	{
		i = 0;
		while (src[i] && (len_d + i + 1 < size))
		{
			dest[len_d + i] = src[i];
			i++;
		}
		dest[len_d + i] = 0;
	}
	return (len_d + len_s);
}
