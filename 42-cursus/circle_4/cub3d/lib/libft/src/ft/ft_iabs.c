/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:19:59 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/08 23:33:37 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Calcula el valor absoluto de un número entero.
 *
 * Esta función toma un número entero 'nb' como entrada y devuelve su valor
 * absoluto, es decir, el número positivo equivalente al valor absoluto del
 * número original si 'nb' es negativo. Si 'nb' es positivo o cero, la función
 * simplemente devuelve 'nb' sin cambios.
 *
 * @param nb El número entero del que se calculará el valor absoluto.
 * @return El valor absoluto de 'nb' (si 'nb' es negativo) o 'nb'
 *         (si 'nb' es no negativo).
 */
int	ft_iabs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}
