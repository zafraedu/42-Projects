/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:07:07 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/04 15:56:18 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* copia los primeros(size) de valores de "src" a "dest" */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
	while (size--)
		*d++ = *s++;
	return (dest);
}
