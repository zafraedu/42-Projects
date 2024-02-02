/* verifica si el caracter "c" es alfabetico o numerico */
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
