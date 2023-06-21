/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:55:17 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/02/07 13:11:58 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	function(char d1, char d2, char d3)
{
	print(d1);
	print(d2);
	print(d3);
	if (d1 < '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0';
	while (d1 <= '7')
	{
	d2 = d1 + 1;
		while (d2 <= '8')
		{
		d3 = d2 + 1;
			while (d3 <= '9')
			{
				function(d1, d2, d3);
				d3++;
			}
		d2++;
		}
	d1++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
