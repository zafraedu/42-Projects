/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:10:54 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/15 12:11:48 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* busca la ultima aparicion del caracter "c" en la cadena "str" */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str) + 1;
	while (i--)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
	}
	return (NULL);
}
