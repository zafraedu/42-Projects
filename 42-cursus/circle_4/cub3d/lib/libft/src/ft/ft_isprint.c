/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:20:28 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/08 23:40:25 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Verifica si un valor int representa un carácter imprimible en la tabla ASCII.
 *
 * Esta función verifica si el valor int `c` representa un carácter imprimible
 * en la tabla ASCII. Los caracteres imprimibles son aquellos con valores en el
 * rango de 32 (espacio) a 126 (tilde '~'), inclusivo.
 *
 * @param c El valor entero que se desea verificar.
 * @return 1 si 'c' representa un carácter imprimible, 0 en caso contrario.
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
