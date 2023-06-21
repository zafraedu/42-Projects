/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:31:38 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/02/05 17:59:59 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{	
	int	column;
	int	row;

	if (x < 0 || y < 0)
		return ;
		column = 1;
		row = 1;
	while (row <= y)
	{
		while (column <= x)
		{
			if ((row == 1 || row == y) && (column == 1 || column == x))
				ft_putchar('o');
			else if (row == 1 || row == y)
				ft_putchar('-');
			else if (column == 1 || column == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			column++;
		}
		row++;
		column = 1;
		ft_putchar('\n');
	}
}
