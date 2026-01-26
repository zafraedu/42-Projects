/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memfree_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:02:51 by zafraedu          #+#    #+#             */
/*   Updated: 2024/01/24 22:03:40 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Libera la memoria asignada para un array de cadenas de caracteres y el propio
 * array.
 *
 * Esta función libera la memoria asignada para cada cadena de caracteres en el
 * array 'ptr', y luego libera la memoria utilizada por el propio array 'ptr'.
 * Finalmente, establece el puntero 'ptr' a NULL para evitar problemas de acceso
 * a memoria liberada.
 *
 * @param ptr Puntero al array de cadenas de caracteres.
 */
void	free2d(char **ptr)
{
	int	i;

	if (!ptr)
		return ;
	i = 0;
	while (ptr[i])
		ft_memfree(ptr[i++]);
	free(ptr);
	ptr = NULL;
}
