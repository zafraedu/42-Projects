/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:39:07 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/02/12 18:35:43 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
#include <stdio.h>
int	main(){
	int a = 12;
	int b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d | %d", a, b);
}
*/
