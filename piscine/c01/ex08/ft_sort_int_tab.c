/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:22:32 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/02/12 18:22:49 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
/*
#include <stdio.h>
int	main(){
	int tab[6] = {4, 2, 7, 5, 3, 6};
	int	size = 6;
	ft_sort_int_tab(tab, size);

	int i = 0;
	while(i < size){
		printf("%d", tab[i]);
		if(i < size -1)
			printf(", ");
		i++;
	}
}
*/
