/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:41:22 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/11 11:41:43 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* aplica la funcion f en cada caracter de la cadena "s"                      */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = ft_strlen(s);
	while (i--)
		f(i, &s[i]);
}
