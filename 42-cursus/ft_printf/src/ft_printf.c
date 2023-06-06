/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:45:53 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/31 17:48:20 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

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
			reset_block(&b);
			ft_check_flags(str, &b);
			ft_check_types(str, &b);
		}
	}
	va_end(b.ap);
	reset_block(&b);
	return (b.ret);
}
