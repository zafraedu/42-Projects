/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:19:54 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/08 23:27:43 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Rellena con 0 los primeros `size` bytes de la memoria apuntada por `str`.
 *
 * Esta función se utiliza para inicializar una región de memoria a cero (0).
 * Toma un puntero a una región de memoria y un tamaño 'size' y establece a cero
 * los primeros 'size' bytes de esa región de memoria.
 *
 * @param str  Puntero a la región de memoria que se va a inicializar a cero.
 *
 * @param size Tamaño en bytes de la región de memoria que se inicializará a 0.
 */
void	ft_bzero(void *str, size_t size)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (i < size)
		s[i++] = 0;
}
