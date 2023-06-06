/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:28:07 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/15 12:00:54 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* asigna memoria dinamica a una string que contine "str"                     */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*copy;

	len = ft_strlen(str);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (len >= 0)
	{
		copy[len] = str[len];
		len--;
	}
	return (copy);
}
