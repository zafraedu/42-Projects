/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:20:22 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/08 23:44:30 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Verifica si un valor entero representa un signo (+ o -).
 *
 * Esta función verifica si el valor entero 'c' representa un signo, ya sea
 * positivo (+) o negativo (-). Los valores 43 y 45 corresponden a los códigos
 * ASCII de los signos '+' y '-' respectivamente.
 *
 * @param c El valor entero que se desea verificar.
 * @return 1 si 'c' representa un signo (+ o -), 0 en caso contrario.
 */
int	ft_issign(int c)
{
	return (c == 43 || c == 45);
}
