/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:20:22 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/08 23:38:40 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Verifica si un valor entero representa un dígito decimal.
 *
 * Esta función verifica si el valor entero 'c' representa un dígito decimal,
 * es decir, un número del 0 al 9.
 *
 * @param c El valor entero que se desea verificar.
 * @return 1 si 'c' representa un dígito decimal, 0 en caso contrario.
 */
int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
