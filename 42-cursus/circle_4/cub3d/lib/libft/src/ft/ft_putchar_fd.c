/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:21:50 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:24:37 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Escribe un carácter en un descriptor de archivo específico.
 *
 * Esta función toma un carácter 'c' y lo escribe en el descriptor de archivo
 * 'fd'.
 *
 * @param c     El carácter que se escribirá en el archivo.
 * @param fd    El descriptor de archivo donde se escribirá el carácter.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
