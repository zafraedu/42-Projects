/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:45:59 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/08 17:46:02 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* buscar la primera aparicion de la subcadena(needle) en la cadena "haystack"
hasta los primeros (size) de valores */
#include "libft.h"

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
