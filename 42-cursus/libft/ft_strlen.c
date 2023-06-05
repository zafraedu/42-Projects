/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:01:50 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/04 15:12:22 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* cuenta la longitud del string (sin el nulo) */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
