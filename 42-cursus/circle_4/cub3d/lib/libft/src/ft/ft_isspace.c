/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:20:22 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/12 19:19:34 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Comprueba si un carácter es un espacio en blanco.
 *
 * Esta función toma un valor entero que representa un carácter y determina
 * si es un espacio en blanco o no.
 *
 * @param c  El valor entero que se verificará como espacio en blanco.
 * @return   1 si 'c' es un espacio en blanco, 0 en caso contrario.
 */
int	ft_isspace(int c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}
