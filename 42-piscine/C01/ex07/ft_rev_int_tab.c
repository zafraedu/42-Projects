/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:59:08 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/02/12 18:43:09 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
/*
#include <stdio.h>
int	main(){
	int tab[6] = {0,1,2,3,4,5};
	int size = 6;
	ft_rev_int_tab(tab, size);

	int i = 0;
	while(i <= (size - 1)){
		printf("%d", tab[i]);
		if(i < size - 1)
			printf(", ");
		i++;
	}
}
*/
