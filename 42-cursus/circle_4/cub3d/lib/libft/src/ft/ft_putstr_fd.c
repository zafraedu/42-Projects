/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:01 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:28:49 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Escribe una cadena de caracteres en un descriptor de archivo específico.
 *
 * Esta función toma una cadena de caracteres 's' y la escribe en el descriptor
 * de archivo 'fd'.
 *
 * @param s La cadena de caracteres que se escribirá en el archivo.
 * @param fd El descriptor de archivo donde se escribirá el String.
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
