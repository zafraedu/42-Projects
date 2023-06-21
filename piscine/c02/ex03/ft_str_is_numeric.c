/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:09:06 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/02/14 14:57:22 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main(){
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("1234"));
	printf("%d\n", ft_str_is_numeric("12a3"));
	printf("%d\n", ft_str_is_numeric("abcd"));
}
*/
