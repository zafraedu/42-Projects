/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:23:17 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/07/15 18:27:40 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	reset_block_pf(t_block *b)
{
	b->type = 0;
	free(b->s);
	b->s = NULL;
	b->flags.len_h = 0;
	b->flags.len_hh = 0;
	b->flags.len_l = 0;
	b->flags.len_ll = 0;
}

void	print_char_pf(char c, t_block *b)
{
	b->ret += write(1, &c, 1);
	(b->i)++;
}

void	print_str_pf(t_block *b)
{
	b->ret += write(1, b->s, ft_strlen(b->s));
	(b->i)++;
}

void	print_null_pf(t_block *b)
{
	b->ret += write(1, "(null)", 6);
	(b->i)++;
}

void	print_dig_pf(t_block *b)
{
	if (b->type == 'X')
		ft_toupper_str(b->s);
	b->ret += write(1, b->s, ft_strlen(b->s));
	(b->i)++;
}
