/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_converter_iduxo.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:23:14 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/07/15 18:23:15 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_converter_id(t_block *b)
{
	long long	temp;

	if (b->flags.len_l || b->flags.len_ll)
	{
		temp = va_arg(b->ap, long long);
		if (temp == LLONG_MIN)
			b->s = ft_strdup("-9223372036854775808");
		if (b->flags.len_l)
			b->s = ft_sltoa((long)temp);
		else if (b->flags.len_ll)
			b->s = ft_sltoa(temp);
	}
	else
	{
		temp = va_arg(b->ap, signed int);
		if (b->flags.len_h)
			b->s = ft_itoa((signed short)temp);
		else if (b->flags.len_hh)
			b->s = ft_itoa((signed char)temp);
		else
			b->s = ft_itoa((signed int)temp);
	}
	print_dig_pf(b);
}

void	ft_converter_u(t_block *b)
{
	unsigned long long	temp;

	if (b->flags.len_l || b->flags.len_ll)
	{
		temp = va_arg(b->ap, unsigned long long);
		if (b->flags.len_l)
			b->s = ft_ultoa((unsigned long)temp);
		else
			b->s = ft_ultoa(temp);
	}
	else
	{
		temp = va_arg(b->ap, unsigned int);
		if (b->flags.len_h)
			b->s = ft_ultoa((unsigned short)temp);
		else if (b->flags.len_hh)
			b->s = ft_ultoa((unsigned char)temp);
		else
			b->s = ft_ultoa((unsigned int)temp);
	}
	print_dig_pf(b);
}

void	ft_converter_x(char type, t_block *b)
{
	unsigned long long	temp;
	unsigned long long	ul;

	b->type = type;
	if (b->flags.len_l || b->flags.len_ll)
	{
		temp = va_arg(b->ap, unsigned long long);
		if (b->flags.len_l)
			ul = (unsigned long)temp;
		else
			ul = temp;
	}
	else
	{
		temp = va_arg(b->ap, unsigned int);
		if (b->flags.len_h)
			ul = (unsigned short)temp;
		else if (b->flags.len_hh)
			ul = (unsigned char)temp;
		else
			ul = (unsigned int)temp;
	}
	b->s = ft_itoa_base(ul, 16);
	print_dig_pf(b);
}

void	ft_converter_o(t_block *b)
{
	unsigned long long	temp;
	unsigned long long	ul;

	if (b->flags.len_l || b->flags.len_ll)
	{
		temp = va_arg(b->ap, unsigned long long);
		if (b->flags.len_l)
			ul = (unsigned long)temp;
		else
			ul = temp;
	}
	else
	{
		temp = va_arg(b->ap, unsigned int);
		if (b->flags.len_h)
			ul = (unsigned short)temp;
		else if (b->flags.len_hh)
			ul = (unsigned char)temp;
		else
			ul = (unsigned int)temp;
	}
	b->s = ft_itoa_base(ul, 8);
	print_dig_pf(b);
}
