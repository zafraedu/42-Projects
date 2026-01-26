/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:20:36 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/08 23:56:22 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static size_t	len_int(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

/**
 * Convierte un número entero en una cadena de caracteres.
 *
 * Esta función toma un número entero 'n' y lo convierte en una cadena de
 * caracteres. La cadena resultante representa el valor de 'n'. La función
 * maneja números negativos y positivos.
 *
 * @param n El número entero que se desea convertir.
 * @return Un puntero a la cadena de caracteres que representa el número,
 *         o NULL en caso de error.
 */
char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long long	nl;

	nl = n;
	len = len_int(nl);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nl < 0)
	{
		str[0] = '-';
		nl *= -1;
	}
	str[len] = 0;
	str[--len] = (nl % 10) + '0';
	nl /= 10;
	while (nl != 0 && len--)
	{
		str[len] = (nl % 10) + '0';
		nl /= 10;
	}
	return (str);
}
