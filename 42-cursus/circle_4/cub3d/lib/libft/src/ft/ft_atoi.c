/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:19:49 by ezafra-r          #+#    #+#             */
/*   Updated: 2024/01/29 13:33:34 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Convierte una cadena de caracteres en un valor de tipo entero.
 *
 * Esta función toma una cadena de caracteres que representa un número entero y
 * la convierte en un valor de tipo entero. Ignora los espacios en blanco
 * iniciales, y puede manejar números negativos precedidos por el signo "-" y
 * números positivos precedidos por el signo "+".
 *
 * @param str La cadena de caracteres que se va a convertir a un entero.
 *
 * @return El valor entero correspondiente a la cadena de caracteres.
 * Si la cadena no es un número válido, devuelve 0.
 */
int	ft_atoi(const char *str)
{
	long	atoi;
	int		sign;

	atoi = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		atoi *= 10;
		atoi += *str - 48;
		str++;
	}
	return (atoi * sign);
}
