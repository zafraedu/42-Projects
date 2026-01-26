/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:56 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:52:12 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Convierte un carácter en mayúsculas si es una letra minúscula.
 *
 * Esta función toma un carácter 'c' como argumento y, si 'c' es una letra
 * minúscula, la convierte en su equivalente en mayúsculas. Si 'c' no es
 * una letra minúscula, se devuelve sin cambios.
 *
 * @param c El carácter que se va a convertir a mayúsculas.
 * @return El carácter convertido o el mismo carácter si no es una letra
 *         minúscula.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
