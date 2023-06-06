/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:20:32 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/15 12:11:06 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* busca la primera aparicion del caracter "c" en la cadena "str" */
#include "libft.h"

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
