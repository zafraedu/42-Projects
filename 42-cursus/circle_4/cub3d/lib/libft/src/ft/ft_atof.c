/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 00:18:52 by zafraedu          #+#    #+#             */
/*   Updated: 2023/11/09 10:39:37 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Convierte una cadena de caracteres en un valor de tipo double/float.
 *
 * Esta función toma una cadena de caracteres que representa un número decimal
 * y la convierte en un valor de tipo double. Puede manejar números enteros y
 * decimales en formato estándar (por ejemplo, "123.45") o con coma decimal
 * (por ejemplo, "123,45").
 *
 * @param str La cadena de caracteres que se va a convertir a double.
 *
 * @return El valor double correspondiente a la cadena de caracteres.
 * Si la cadena no es un número válido, devuelve 0.0;
 */
double	ft_atof(char *str)
{
	int		num;
	double	rest;
	char	*tmp;
	int		i;

	num = ft_atoi(str);
	tmp = ft_strchr(str, '.');
	if (!tmp)
		tmp = ft_strchr(str, ',');
	if (!tmp)
		return (num);
	rest = ft_atoi(&tmp[1]);
	i = 1;
	while (tmp[i])
	{
		rest /= 10;
		i++;
	}
	if (num < 0 || (str[0] == '-' && str[1] == '0'))
		return (num - rest);
	return (num + rest);
}
