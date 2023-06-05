/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:05:16 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/04 15:13:21 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* convierte en nulo los primeros ("size") de caracteres de la cadena "str" */
#include "libft.h"

void	ft_bzero(void *str, size_t size)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (i < size)
		s[i++] = 0;
}
