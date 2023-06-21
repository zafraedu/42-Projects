/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:58:25 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/02/16 16:22:04 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
#include <string.h>
#include <stdio.h>
int	main(){
	char dest[5];
	char src[] = "Hola que tal";
	printf("%d %s\n", strlcpy(dest, src, sizeof(dest)), dest);
	printf("%d %s\n", ft_strlcpy(dest, src, sizeof(dest)), dest);
	return (0);
}
*/
