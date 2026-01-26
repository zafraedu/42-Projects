/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:21:34 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:13:34 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Busca la primera aparición de un byte específico en una región de memoria.
 *
 * Esta función busca la primera aparición del byte 'c' en la región de memoria
 * 'str' de tamaño 'size' bytes y devuelve un puntero a la ubicación de ese byte
 * si se encuentra, o NULL si no se encuentra.
 *
 * @param str Puntero al inicio de la región de memoria donde se realizará la
 *            búsqueda.
 * @param c El byte que se busca en la región de memoria.
 * @param size Tamaño de la región de memoria en bytes.
 * @return Puntero a la ubicación del byte encontrado o NULL si no se encuentra.
 */
void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t			i;
	unsigned char	*pstr;

	i = 0;
	pstr = (unsigned char *)str;
	while (size--)
	{
		if (pstr[i] == (unsigned char)c)
			return (&pstr[i]);
		i++;
	}
	return (NULL);
}
