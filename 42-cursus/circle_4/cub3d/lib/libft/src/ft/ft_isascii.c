/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:20:11 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/08 23:38:15 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Verifica si un valor entero representa un carácter ASCII válido.
 *
 * Esta función verifica si el valor entero 'c' representa un carácter ASCII
 * válido. Los caracteres ASCII válidos son aquellos con valores en el rango de
 * 0 a 127, inclusivo.
 *
 * @param c El valor entero que se desea verificar.
 * @return 1 si 'c' representa un carácter ASCII válido, 0 en caso contrario.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
