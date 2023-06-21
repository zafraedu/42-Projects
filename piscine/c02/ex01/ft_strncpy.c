/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:39:10 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/02/16 16:03:50 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(){
	char src[8] = "Eduardo";
	char dest[8];

	printf("%s\n", ft_strncpy(dest, src, 3));
	printf("%s\n", strncpy(dest, src, 3));
}
*/
