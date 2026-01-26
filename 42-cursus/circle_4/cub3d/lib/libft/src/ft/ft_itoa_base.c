/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:20:32 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/08 23:52:59 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int	mem_str(int base)
{
	if (base == 2)
		return (sizeof(int) * 8);
	else if (base == 8)
		return (22);
	else if (base == 16)
		return (16);
	return (0);
}

static void	test(int base, char *str, int i, unsigned int digit)
{
	if (base == 2 || base == 8)
		str[i] = '0' + digit;
	else if (base == 16)
	{
		if (digit < 10)
			str[i] = '0' + digit;
		else
			str[i] = 'a' + digit - 10;
	}
}

static char	*str_invert(char *str, int index)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = index - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

/**
 * Convierte un número en una cadena de caracteres en la base especificada.
 *
 * Esta función toma un número sin signo 'ul' y lo convierte en una cadena de
 * caracteres representando dicho número en la base especificada por 'base'
 * (2, 8 u 16).
 *
 * @param ul El número sin signo que se desea convertir.
 * @param base La base en la que se desea representar el número (2, 8 u 16).
 * @return Un puntero a la cadena de caracteres que representa el número,
 *         o NULL en caso de error.
 */
char	*ft_itoa_base(unsigned long long ul, int base)
{
	char			*str;
	int				i;
	unsigned int	digit;

	if (base != 2 && base != 8 && base != 16)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (mem_str(base) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (ul > 0)
	{
		digit = ul % base;
		test(base, str, i, digit);
		ul /= base;
		i++;
	}
	if (i == 0)
		str[i++] = '0';
	str[i] = 0;
	str_invert(str, i);
	return (str);
}
