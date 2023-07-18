#include "../inc/libft.h"

void	ft_toupper_str(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str);
	while (len--)
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}
