/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:50 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:49:12 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Convierte un carácter en mayúscula en su equivalente en minúscula.
 *
 * Si el carácter 'c' es una letra mayúscula (A-Z), esta función lo convierte
 * en su equivalente en minúscula y lo devuelve. Si 'c' no es una letra
 * mayúscula, se devuelve sin cambios.
 *
 * @param c  El carácter que se va a convertir en minúscula.
 * @return (El carácter 'c' convertido en minúscula, si es una letra mayúscula);
 *         de lo contrario, se devuelve sin cambios.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
