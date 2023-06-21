/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:04:50 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/02/16 16:11:21 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_uppercase(str[i]) || is_lowercase(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main(){
	printf("%d\n", ft_str_is_alpha("")); 
	printf("%d\n", ft_str_is_alpha("abcdefgh"));
	printf("%d\n", ft_str_is_alpha("ABCDEFGH"));
	printf("%d\n", ft_str_is_alpha("aBcDeFgG"));
	printf("%d\n", ft_str_is_alpha("a4b*c"));
}
*/
