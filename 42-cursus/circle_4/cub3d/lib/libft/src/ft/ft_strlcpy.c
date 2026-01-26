/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:24 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:42:39 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Copia una cadena de origen en una cadena de destino con un tamaño máximo.
 *
 * Esta función toma una cadena de origen 'src' y la copia en la cadena de
 * destino 'dest', asegurándose de que no exceda el tamaño máximo especificado
 * 'size'. La función garantiza que la cadena de destino esté terminada con un
 * carácter nulo (`'\0'`). El valor de retorno es la longitud de la cadena de
 * origen.
 *
 * @param dest  La cadena de destino en la que se copiará 'src'.
 * @param src   La cadena de origen que se copiará en 'dest'.
 * @param size  El tamaño máximo permitido para la cadena de destino.
 * @return La longitud de la cadena de origen
 *         (la cantidad de caracteres copiados).
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (ft_strlen(src));
}
