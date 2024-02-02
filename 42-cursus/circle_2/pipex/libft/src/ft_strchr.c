#include "../inc/libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (!(*str))
			return (NULL);
		str++;
	}
	return ((char *)str);
}
