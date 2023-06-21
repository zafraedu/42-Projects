/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:30:21 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/02/14 15:39:39 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main(){
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase("ABCD"));
	printf("%d\n", ft_str_is_uppercase("AbCD"));
	printf("%d\n", ft_str_is_uppercase("aBCD"));
	printf("%d\n", ft_str_is_uppercase("Ab12"));
}
*/
