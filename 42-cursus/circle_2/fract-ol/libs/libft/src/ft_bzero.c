/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:19:54 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/07/15 18:19:56 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_bzero(void *str, size_t size)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (i < size)
		s[i++] = 0;
}
