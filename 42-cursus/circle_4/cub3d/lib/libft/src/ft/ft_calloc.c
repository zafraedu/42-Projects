/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:19:59 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/12 17:47:13 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Asigna memoria y la inicializa a cero.
 *
 * Esta función asigna un bloque de memoria contigua lo suficientemente grande
 * para almacenar `num` elementos de tamaño `size` bytes cada uno. Luego,
 * inicializa todo el bloque de memoria asignado a cero (0). Es similar a la
 * función calloc de la biblioteca estándar de C.
 *
 * @param num  Número de elementos que se asignarán.
 * @param size Tamaño en bytes de cada elemento.
 * @return Un puntero al bloque de memoria asignado y inicializado
 *         o NULL si falla la asignación de memoria.
 */
void	*ft_calloc(size_t num, size_t size)
{
	void	*p;

	p = malloc(num * size);
	if (!p)
		return (NULL);
	ft_bzero(p, (num * size));
	return (p);
}
