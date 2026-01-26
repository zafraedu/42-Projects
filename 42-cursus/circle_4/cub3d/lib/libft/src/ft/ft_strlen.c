/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:28 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:43:13 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Calcula la longitud de una cadena de caracteres.
 *
 * Esta función recibe una cadena de caracteres 'str' y devuelve la cantidad
 * de caracteres en la cadena, excluyendo el carácter nulo ('\0') al final.
 *
 * @param str  La cadena de caracteres cuya longitud se desea calcular.
 * @return     La cantidad de caracteres en la cadena 'str'.
 */
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
