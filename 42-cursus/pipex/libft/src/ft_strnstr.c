#include "../inc/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	i;

	i = ft_strlen(needle);
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && size-- >= i)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, i) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
