/* verifica si el caracter "c" esta en la tabla ascii */
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
