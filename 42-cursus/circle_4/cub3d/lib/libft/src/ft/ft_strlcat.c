/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:22 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:41:09 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Concatena una cadena de origen en una cadena de destino con un tamaño máximo.
 *
 * Esta función toma una cadena de destino 'dest', una cadena de origen 'src' y
 * un tamaño máximo 'size' y concatena la cadena de origen en la cadena de
 * destino, asegurándose de no exceder el tamaño máximo especificado. La función
 * garantiza que la cadena de destino esté terminada con un carácter nulo
 * (`'\0'`). El valor de retorno es el tamaño total que la cadena de destino
 * tendría si no se hubiera aplicado ninguna restricción de tamaño.
 *
 * @param dest  La cadena de destino en la que se concatenará 'src'.
 * @param src   La cadena de origen que se concatenará en 'dest'.
 * @param size  El tamaño máximo permitido para la cadena resultante.
 * @return El tamaño total que la cadena de destino tendría sin restricciones
 *         de tamaño.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (len_d >= size)
		return (len_s + size);
	else if (len_d + 1 < size)
	{
		i = 0;
		while (src[i] && (len_d + i + 1 < size))
		{
			dest[len_d + i] = src[i];
			i++;
		}
		dest[len_d + i] = 0;
	}
	return (len_d + len_s);
}
