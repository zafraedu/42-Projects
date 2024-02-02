/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombeau <mcombeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:46:32 by mcombeau          #+#    #+#             */
/*   Updated: 2021/12/17 17:27:06 by mcombeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_i(char *nbstr, int n, t_flags flags)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		if (flags.zero == 0 || flags.precision >= 0)
			count += ft_print_c('-');
	}
	else if (flags.plus == 1 && flags.zero == 0)
		count += ft_print_c('+');
	else if (flags.space == 1 && flags.zero == 0)
		count += ft_print_c(' ');
	if (flags.precision >= 0)
		count += ft_pad_width(flags.precision - 1,
				ft_strlen(nbstr) - 1, 1);
	count += ft_print_s(nbstr);
	return (count);
}

int	ft_print_sign_pre(int n, t_flags *flags)
{
	int	count;

	count = 0;
	if (n < 0 && flags->precision == -1)
	{
		count += ft_print_c('-');
		flags->width--;
	}
	else if (flags->plus == 1)
		count += ft_print_c('+');
	else if (flags->space == 1)
	{
		count += ft_print_c(' ');
		flags->width--;
	}
	return (count);
}

int	ft_print_integer(char *nbstr, int n, t_flags flags)
{
	int	count;

	count = 0;
	if (flags.zero == 1)
		count += ft_print_sign_pre(n, &flags);
	if (flags.left == 1)
		count += ft_print_i(nbstr, n, flags);
	if (flags.precision >= 0 && (size_t)flags.precision < ft_strlen(nbstr))
		flags.precision = ft_strlen(nbstr);
	if (flags.precision >= 0)
	{
		flags.width -= flags.precision;
		if (n < 0 && flags.left == 0)
			flags.width -= 1;
		count += ft_pad_width(flags.width, 0, 0);
	}
	else
		count += ft_pad_width(flags.width - flags.plus - flags.space,
				ft_strlen(nbstr), flags.zero);
	if (flags.left == 0)
		count += ft_print_i(nbstr, n, flags);
	return (count);
}

int	ft_print_int(int n, t_flags flags)
{
	char	*nbstr;
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		if (flags.zero == 0)
			flags.width--;
	}
	if (flags.precision == 0 && n == 0)
	{
		count += ft_pad_width(flags.width, 0, 0);
		return (count);
	}
	nbstr = ft_printf_itoa(nb);
	if (!nbstr)
		return (0);
	count += ft_print_integer(nbstr, n, flags);
	free(nbstr);
	return (count);
}
