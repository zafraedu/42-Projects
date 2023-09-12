/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:21:48 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/07/15 18:21:48 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_printf(const char *str, ...)
{
	t_block	b;

	ft_bzero(&b, sizeof(b));
	va_start(b.ap, str);
	while (str[b.i])
	{
		if (str[b.i] != '%')
			b.ret += write(1, &str[b.i++], 1);
		else
		{
			(b.i)++;
			reset_block_pf(&b);
			checkflags_pf(str, &b);
			checktypes_pf(str, &b);
		}
	}
	va_end(b.ap);
	reset_block_pf(&b);
	return (b.ret);
}
