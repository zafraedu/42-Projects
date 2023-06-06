/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:14:30 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/04 15:57:16 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* copia los primeros(size) valores de "src" a "dest", hasta si se superponen */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (d < s)
		ft_memcpy(d, s, size);
	else
	{
		while (size--)
			d[size] = s[size];
	}
	return (d);
}
