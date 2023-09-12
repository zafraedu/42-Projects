/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:23:06 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/07/15 18:23:07 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static void	flag_len_pf(const char *str, t_block *b)
{
	if (str[b->i] == 'h' && str[b->i + 1] != 'h')
		b->flags.len_h = 1;
	else if (str[b->i] == 'h' && str[b->i + 1] == 'h')
	{
		b->flags.len_hh = 1;
		(b->i)++;
	}
	else if (str[b->i] == 'l' && str[b->i + 1] != 'l')
		b->flags.len_l = 1;
	else if (str[b->i] == 'l' && str[b->i + 1] == 'l')
	{
		b->flags.len_ll = 1;
		(b->i)++;
	}
}

void	checkflags_pf(const char *str, t_block *b)
{
	while (ft_strchr(PRINTF_FLAG, str[b->i]) && str[b->i] != '\0')
	{
		if (str[b->i] == 'l' || str[b->i] == 'h')
			flag_len_pf(str, b);
	}
}

// falta las funciones -----------------------------------------
void	checktypes_pf(const char *str, t_block *b)
{
	if (str[b->i] == '%' || str[b->i] == 'c' || str[b->i] == 's')
		ft_converter_cs(str[b->i], b);
	else if (str[b->i] == 'p')
		ft_converter_p(b);
	else if (str[b->i] == 'i' || str[b->i] == 'd')
		ft_converter_id(b);
	else if (str[b->i] == 'u')
		ft_converter_u(b);
	else if (str[b->i] == 'x' || str[b->i] == 'X')
		ft_converter_x(str[b->i], b);
	else if (str[b->i] == 'o')
		ft_converter_o(b);
}
