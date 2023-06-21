/* asigna memoria dinamica a una string que contine "str"                     */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*copy;

	len = ft_strlen(str);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (len >= 0)
	{
		copy[len] = str[len];
		len--;
	}
	return (copy);
}
