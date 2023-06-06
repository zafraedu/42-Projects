/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:03:05 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/04 15:12:36 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* cambia el valor de los primeros "size" del string "str" por el caracter "c"*/
#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	size_t	i;
	char	*pstr;

	i = 0;
	pstr = (char *)str;
	while (i < size)
		pstr[i++] = c;
	return (str);
}
